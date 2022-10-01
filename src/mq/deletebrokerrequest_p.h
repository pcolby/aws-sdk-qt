// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBROKERREQUEST_P_H
#define QTAWS_DELETEBROKERREQUEST_P_H

#include "mqrequest_p.h"
#include "deletebrokerrequest.h"

namespace QtAws {
namespace Mq {

class DeleteBrokerRequest;

class DeleteBrokerRequestPrivate : public MqRequestPrivate {

public:
    DeleteBrokerRequestPrivate(const MqRequest::Action action,
                                   DeleteBrokerRequest * const q);
    DeleteBrokerRequestPrivate(const DeleteBrokerRequestPrivate &other,
                                   DeleteBrokerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBrokerRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
