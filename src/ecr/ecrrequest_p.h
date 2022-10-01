// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ECRREQUEST_P_H
#define QTAWS_ECRREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class EcrRequest;

class EcrRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    EcrRequest::Action action; ///< Ecr action to be performed.
    QString apiVersion;        ///< Ecr API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Ecr request (query string) parameters. @todo?

    EcrRequestPrivate(const EcrRequest::Action action, EcrRequest * const q);
    EcrRequestPrivate(const EcrRequestPrivate &other, EcrRequest * const q);

    static QString toString(const EcrRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(EcrRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
