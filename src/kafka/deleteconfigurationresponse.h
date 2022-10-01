// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONRESPONSE_H
#define QTAWS_DELETECONFIGURATIONRESPONSE_H

#include "kafkaresponse.h"
#include "deleteconfigurationrequest.h"

namespace QtAws {
namespace Kafka {

class DeleteConfigurationResponsePrivate;

class QTAWSKAFKA_EXPORT DeleteConfigurationResponse : public KafkaResponse {
    Q_OBJECT

public:
    DeleteConfigurationResponse(const DeleteConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConfigurationResponse)
    Q_DISABLE_COPY(DeleteConfigurationResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
