// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATECLUSTERCONFIGURATIONRESPONSE_H

#include "kafkaresponse.h"
#include "updateclusterconfigurationrequest.h"

namespace QtAws {
namespace Kafka {

class UpdateClusterConfigurationResponsePrivate;

class QTAWSKAFKA_EXPORT UpdateClusterConfigurationResponse : public KafkaResponse {
    Q_OBJECT

public:
    UpdateClusterConfigurationResponse(const UpdateClusterConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateClusterConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateClusterConfigurationResponse)
    Q_DISABLE_COPY(UpdateClusterConfigurationResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
