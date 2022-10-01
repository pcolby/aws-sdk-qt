// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACMPCAREQUEST_P_H
#define QTAWS_ACMPCAREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "acmpcarequest.h"

namespace QtAws {
namespace AcmPca {

class AcmPcaRequest;

class AcmPcaRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AcmPcaRequest::Action action; ///< AcmPca action to be performed.
    QString apiVersion;        ///< AcmPca API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AcmPca request (query string) parameters. @todo?

    AcmPcaRequestPrivate(const AcmPcaRequest::Action action, AcmPcaRequest * const q);
    AcmPcaRequestPrivate(const AcmPcaRequestPrivate &other, AcmPcaRequest * const q);

    static QString toString(const AcmPcaRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AcmPcaRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
