// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOOTSTRAPBROKERSRESPONSE_H
#define QTAWS_GETBOOTSTRAPBROKERSRESPONSE_H

#include "kafkaresponse.h"
#include "getbootstrapbrokersrequest.h"

namespace QtAws {
namespace Kafka {

class GetBootstrapBrokersResponsePrivate;

class QTAWSKAFKA_EXPORT GetBootstrapBrokersResponse : public KafkaResponse {
    Q_OBJECT

public:
    GetBootstrapBrokersResponse(const GetBootstrapBrokersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBootstrapBrokersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBootstrapBrokersResponse)
    Q_DISABLE_COPY(GetBootstrapBrokersResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
