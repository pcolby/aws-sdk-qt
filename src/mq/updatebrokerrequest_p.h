// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBROKERREQUEST_P_H
#define QTAWS_UPDATEBROKERREQUEST_P_H

#include "mqrequest_p.h"
#include "updatebrokerrequest.h"

namespace QtAws {
namespace Mq {

class UpdateBrokerRequest;

class UpdateBrokerRequestPrivate : public MqRequestPrivate {

public:
    UpdateBrokerRequestPrivate(const MqRequest::Action action,
                                   UpdateBrokerRequest * const q);
    UpdateBrokerRequestPrivate(const UpdateBrokerRequestPrivate &other,
                                   UpdateBrokerRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBrokerRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
