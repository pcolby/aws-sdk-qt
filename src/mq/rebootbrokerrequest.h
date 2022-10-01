// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTBROKERREQUEST_H
#define QTAWS_REBOOTBROKERREQUEST_H

#include "mqrequest.h"

namespace QtAws {
namespace Mq {

class RebootBrokerRequestPrivate;

class QTAWSMQ_EXPORT RebootBrokerRequest : public MqRequest {

public:
    RebootBrokerRequest(const RebootBrokerRequest &other);
    RebootBrokerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootBrokerRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
