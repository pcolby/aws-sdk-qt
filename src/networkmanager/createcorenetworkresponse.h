// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECORENETWORKRESPONSE_H
#define QTAWS_CREATECORENETWORKRESPONSE_H

#include "networkmanagerresponse.h"
#include "createcorenetworkrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateCoreNetworkResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT CreateCoreNetworkResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    CreateCoreNetworkResponse(const CreateCoreNetworkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCoreNetworkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCoreNetworkResponse)
    Q_DISABLE_COPY(CreateCoreNetworkResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
