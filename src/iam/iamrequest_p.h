// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IAMREQUEST_P_H
#define QTAWS_IAMREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class IamRequest;

class IamRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IamRequest::Action action; ///< Iam action to be performed.
    QString apiVersion;        ///< Iam API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Iam request (query string) parameters. @todo?

    IamRequestPrivate(const IamRequest::Action action, IamRequest * const q);
    IamRequestPrivate(const IamRequestPrivate &other, IamRequest * const q);

    static QString toString(const IamRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IamRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
