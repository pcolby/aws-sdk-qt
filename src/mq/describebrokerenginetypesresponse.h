// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBROKERENGINETYPESRESPONSE_H
#define QTAWS_DESCRIBEBROKERENGINETYPESRESPONSE_H

#include "mqresponse.h"
#include "describebrokerenginetypesrequest.h"

namespace QtAws {
namespace Mq {

class DescribeBrokerEngineTypesResponsePrivate;

class QTAWSMQ_EXPORT DescribeBrokerEngineTypesResponse : public MqResponse {
    Q_OBJECT

public:
    DescribeBrokerEngineTypesResponse(const DescribeBrokerEngineTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBrokerEngineTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBrokerEngineTypesResponse)
    Q_DISABLE_COPY(DescribeBrokerEngineTypesResponse)

};

} // namespace Mq
} // namespace QtAws

#endif
