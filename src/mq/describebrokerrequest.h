// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBROKERREQUEST_H
#define QTAWS_DESCRIBEBROKERREQUEST_H

#include "mqrequest.h"

namespace QtAws {
namespace Mq {

class DescribeBrokerRequestPrivate;

class QTAWSMQ_EXPORT DescribeBrokerRequest : public MqRequest {

public:
    DescribeBrokerRequest(const DescribeBrokerRequest &other);
    DescribeBrokerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBrokerRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
