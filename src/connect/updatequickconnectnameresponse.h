// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUICKCONNECTNAMERESPONSE_H
#define QTAWS_UPDATEQUICKCONNECTNAMERESPONSE_H

#include "connectresponse.h"
#include "updatequickconnectnamerequest.h"

namespace QtAws {
namespace Connect {

class UpdateQuickConnectNameResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateQuickConnectNameResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateQuickConnectNameResponse(const UpdateQuickConnectNameRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateQuickConnectNameRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateQuickConnectNameResponse)
    Q_DISABLE_COPY(UpdateQuickConnectNameResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
