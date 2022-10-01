// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUICKCONNECTCONFIGRESPONSE_H
#define QTAWS_UPDATEQUICKCONNECTCONFIGRESPONSE_H

#include "connectresponse.h"
#include "updatequickconnectconfigrequest.h"

namespace QtAws {
namespace Connect {

class UpdateQuickConnectConfigResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateQuickConnectConfigResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateQuickConnectConfigResponse(const UpdateQuickConnectConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateQuickConnectConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateQuickConnectConfigResponse)
    Q_DISABLE_COPY(UpdateQuickConnectConfigResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
