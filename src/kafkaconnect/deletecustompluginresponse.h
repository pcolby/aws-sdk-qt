// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMPLUGINRESPONSE_H
#define QTAWS_DELETECUSTOMPLUGINRESPONSE_H

#include "kafkaconnectresponse.h"
#include "deletecustompluginrequest.h"

namespace QtAws {
namespace KafkaConnect {

class DeleteCustomPluginResponsePrivate;

class QTAWSKAFKACONNECT_EXPORT DeleteCustomPluginResponse : public KafkaConnectResponse {
    Q_OBJECT

public:
    DeleteCustomPluginResponse(const DeleteCustomPluginRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCustomPluginRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomPluginResponse)
    Q_DISABLE_COPY(DeleteCustomPluginResponse)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
