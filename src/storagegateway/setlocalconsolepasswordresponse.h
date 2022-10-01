// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOCALCONSOLEPASSWORDRESPONSE_H
#define QTAWS_SETLOCALCONSOLEPASSWORDRESPONSE_H

#include "storagegatewayresponse.h"
#include "setlocalconsolepasswordrequest.h"

namespace QtAws {
namespace StorageGateway {

class SetLocalConsolePasswordResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT SetLocalConsolePasswordResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    SetLocalConsolePasswordResponse(const SetLocalConsolePasswordRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetLocalConsolePasswordRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetLocalConsolePasswordResponse)
    Q_DISABLE_COPY(SetLocalConsolePasswordResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
