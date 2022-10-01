// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMPLUGINSRESPONSE_H
#define QTAWS_LISTCUSTOMPLUGINSRESPONSE_H

#include "kafkaconnectresponse.h"
#include "listcustompluginsrequest.h"

namespace QtAws {
namespace KafkaConnect {

class ListCustomPluginsResponsePrivate;

class QTAWSKAFKACONNECT_EXPORT ListCustomPluginsResponse : public KafkaConnectResponse {
    Q_OBJECT

public:
    ListCustomPluginsResponse(const ListCustomPluginsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCustomPluginsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCustomPluginsResponse)
    Q_DISABLE_COPY(ListCustomPluginsResponse)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
