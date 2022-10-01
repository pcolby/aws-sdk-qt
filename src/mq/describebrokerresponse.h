// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBROKERRESPONSE_H
#define QTAWS_DESCRIBEBROKERRESPONSE_H

#include "mqresponse.h"
#include "describebrokerrequest.h"

namespace QtAws {
namespace Mq {

class DescribeBrokerResponsePrivate;

class QTAWSMQ_EXPORT DescribeBrokerResponse : public MqResponse {
    Q_OBJECT

public:
    DescribeBrokerResponse(const DescribeBrokerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBrokerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBrokerResponse)
    Q_DISABLE_COPY(DescribeBrokerResponse)

};

} // namespace Mq
} // namespace QtAws

#endif
