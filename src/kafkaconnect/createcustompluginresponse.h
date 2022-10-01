// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMPLUGINRESPONSE_H
#define QTAWS_CREATECUSTOMPLUGINRESPONSE_H

#include "kafkaconnectresponse.h"
#include "createcustompluginrequest.h"

namespace QtAws {
namespace KafkaConnect {

class CreateCustomPluginResponsePrivate;

class QTAWSKAFKACONNECT_EXPORT CreateCustomPluginResponse : public KafkaConnectResponse {
    Q_OBJECT

public:
    CreateCustomPluginResponse(const CreateCustomPluginRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCustomPluginRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomPluginResponse)
    Q_DISABLE_COPY(CreateCustomPluginResponse)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
