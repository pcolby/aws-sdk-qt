// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FISREQUEST_P_H
#define QTAWS_FISREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "fisrequest.h"

namespace QtAws {
namespace Fis {

class FisRequest;

class FisRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    FisRequest::Action action; ///< Fis action to be performed.
    QString apiVersion;        ///< Fis API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Fis request (query string) parameters. @todo?

    FisRequestPrivate(const FisRequest::Action action, FisRequest * const q);
    FisRequestPrivate(const FisRequestPrivate &other, FisRequest * const q);

    static QString toString(const FisRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(FisRequest)

};

} // namespace Fis
} // namespace QtAws

#endif
