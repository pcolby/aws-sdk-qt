// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLUSTERSRESPONSE_H
#define QTAWS_LISTCLUSTERSRESPONSE_H

#include "kafkaresponse.h"
#include "listclustersrequest.h"

namespace QtAws {
namespace Kafka {

class ListClustersResponsePrivate;

class QTAWSKAFKA_EXPORT ListClustersResponse : public KafkaResponse {
    Q_OBJECT

public:
    ListClustersResponse(const ListClustersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListClustersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListClustersResponse)
    Q_DISABLE_COPY(ListClustersResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
