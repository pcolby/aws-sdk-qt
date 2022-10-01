// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBROKERREQUEST_H
#define QTAWS_CREATEBROKERREQUEST_H

#include "mqrequest.h"

namespace QtAws {
namespace Mq {

class CreateBrokerRequestPrivate;

class QTAWSMQ_EXPORT CreateBrokerRequest : public MqRequest {

public:
    CreateBrokerRequest(const CreateBrokerRequest &other);
    CreateBrokerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBrokerRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
