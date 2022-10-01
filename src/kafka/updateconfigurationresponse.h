// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONRESPONSE_H
#define QTAWS_UPDATECONFIGURATIONRESPONSE_H

#include "kafkaresponse.h"
#include "updateconfigurationrequest.h"

namespace QtAws {
namespace Kafka {

class UpdateConfigurationResponsePrivate;

class QTAWSKAFKA_EXPORT UpdateConfigurationResponse : public KafkaResponse {
    Q_OBJECT

public:
    UpdateConfigurationResponse(const UpdateConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConfigurationResponse)
    Q_DISABLE_COPY(UpdateConfigurationResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
