// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MQREQUEST_P_H
#define QTAWS_MQREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "mqrequest.h"

namespace QtAws {
namespace Mq {

class MqRequest;

class MqRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MqRequest::Action action; ///< Mq action to be performed.
    QString apiVersion;        ///< Mq API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Mq request (query string) parameters. @todo?

    MqRequestPrivate(const MqRequest::Action action, MqRequest * const q);
    MqRequestPrivate(const MqRequestPrivate &other, MqRequest * const q);

    static QString toString(const MqRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MqRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
