// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBROKERREQUEST_H
#define QTAWS_UPDATEBROKERREQUEST_H

#include "mqrequest.h"

namespace QtAws {
namespace Mq {

class UpdateBrokerRequestPrivate;

class QTAWSMQ_EXPORT UpdateBrokerRequest : public MqRequest {

public:
    UpdateBrokerRequest(const UpdateBrokerRequest &other);
    UpdateBrokerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBrokerRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
