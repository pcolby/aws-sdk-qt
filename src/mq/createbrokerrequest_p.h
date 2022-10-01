// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBROKERREQUEST_P_H
#define QTAWS_CREATEBROKERREQUEST_P_H

#include "mqrequest_p.h"
#include "createbrokerrequest.h"

namespace QtAws {
namespace Mq {

class CreateBrokerRequest;

class CreateBrokerRequestPrivate : public MqRequestPrivate {

public:
    CreateBrokerRequestPrivate(const MqRequest::Action action,
                                   CreateBrokerRequest * const q);
    CreateBrokerRequestPrivate(const CreateBrokerRequestPrivate &other,
                                   CreateBrokerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBrokerRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
