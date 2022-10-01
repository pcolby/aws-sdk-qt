// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBROKERREQUEST_H
#define QTAWS_DELETEBROKERREQUEST_H

#include "mqrequest.h"

namespace QtAws {
namespace Mq {

class DeleteBrokerRequestPrivate;

class QTAWSMQ_EXPORT DeleteBrokerRequest : public MqRequest {

public:
    DeleteBrokerRequest(const DeleteBrokerRequest &other);
    DeleteBrokerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBrokerRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
