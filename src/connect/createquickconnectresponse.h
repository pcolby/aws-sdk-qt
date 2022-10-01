// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUICKCONNECTRESPONSE_H
#define QTAWS_CREATEQUICKCONNECTRESPONSE_H

#include "connectresponse.h"
#include "createquickconnectrequest.h"

namespace QtAws {
namespace Connect {

class CreateQuickConnectResponsePrivate;

class QTAWSCONNECT_EXPORT CreateQuickConnectResponse : public ConnectResponse {
    Q_OBJECT

public:
    CreateQuickConnectResponse(const CreateQuickConnectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateQuickConnectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateQuickConnectResponse)
    Q_DISABLE_COPY(CreateQuickConnectResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
