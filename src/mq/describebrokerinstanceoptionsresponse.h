// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBROKERINSTANCEOPTIONSRESPONSE_H
#define QTAWS_DESCRIBEBROKERINSTANCEOPTIONSRESPONSE_H

#include "mqresponse.h"
#include "describebrokerinstanceoptionsrequest.h"

namespace QtAws {
namespace Mq {

class DescribeBrokerInstanceOptionsResponsePrivate;

class QTAWSMQ_EXPORT DescribeBrokerInstanceOptionsResponse : public MqResponse {
    Q_OBJECT

public:
    DescribeBrokerInstanceOptionsResponse(const DescribeBrokerInstanceOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBrokerInstanceOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBrokerInstanceOptionsResponse)
    Q_DISABLE_COPY(DescribeBrokerInstanceOptionsResponse)

};

} // namespace Mq
} // namespace QtAws

#endif
