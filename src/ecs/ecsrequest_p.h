// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ECSREQUEST_P_H
#define QTAWS_ECSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class EcsRequest;

class EcsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    EcsRequest::Action action; ///< Ecs action to be performed.
    QString apiVersion;        ///< Ecs API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Ecs request (query string) parameters. @todo?

    EcsRequestPrivate(const EcsRequest::Action action, EcsRequest * const q);
    EcsRequestPrivate(const EcsRequestPrivate &other, EcsRequest * const q);

    static QString toString(const EcsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(EcsRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
