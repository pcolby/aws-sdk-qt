// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONREVISIONSRESPONSE_H
#define QTAWS_LISTCONFIGURATIONREVISIONSRESPONSE_H

#include "kafkaresponse.h"
#include "listconfigurationrevisionsrequest.h"

namespace QtAws {
namespace Kafka {

class ListConfigurationRevisionsResponsePrivate;

class QTAWSKAFKA_EXPORT ListConfigurationRevisionsResponse : public KafkaResponse {
    Q_OBJECT

public:
    ListConfigurationRevisionsResponse(const ListConfigurationRevisionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListConfigurationRevisionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConfigurationRevisionsResponse)
    Q_DISABLE_COPY(ListConfigurationRevisionsResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
