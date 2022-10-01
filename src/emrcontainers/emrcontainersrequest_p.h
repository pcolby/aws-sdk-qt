// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EMRCONTAINERSREQUEST_P_H
#define QTAWS_EMRCONTAINERSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "emrcontainersrequest.h"

namespace QtAws {
namespace Emrcontainers {

class EmrcontainersRequest;

class EmrcontainersRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    EmrcontainersRequest::Action action; ///< Emrcontainers action to be performed.
    QString apiVersion;        ///< Emrcontainers API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Emrcontainers request (query string) parameters. @todo?

    EmrcontainersRequestPrivate(const EmrcontainersRequest::Action action, EmrcontainersRequest * const q);
    EmrcontainersRequestPrivate(const EmrcontainersRequestPrivate &other, EmrcontainersRequest * const q);

    static QString toString(const EmrcontainersRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(EmrcontainersRequest)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
