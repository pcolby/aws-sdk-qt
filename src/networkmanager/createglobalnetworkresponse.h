// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGLOBALNETWORKRESPONSE_H
#define QTAWS_CREATEGLOBALNETWORKRESPONSE_H

#include "networkmanagerresponse.h"
#include "createglobalnetworkrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateGlobalNetworkResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT CreateGlobalNetworkResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    CreateGlobalNetworkResponse(const CreateGlobalNetworkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGlobalNetworkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGlobalNetworkResponse)
    Q_DISABLE_COPY(CreateGlobalNetworkResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
