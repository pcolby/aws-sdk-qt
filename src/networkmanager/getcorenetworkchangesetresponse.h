// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCORENETWORKCHANGESETRESPONSE_H
#define QTAWS_GETCORENETWORKCHANGESETRESPONSE_H

#include "networkmanagerresponse.h"
#include "getcorenetworkchangesetrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetCoreNetworkChangeSetResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetCoreNetworkChangeSetResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetCoreNetworkChangeSetResponse(const GetCoreNetworkChangeSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCoreNetworkChangeSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCoreNetworkChangeSetResponse)
    Q_DISABLE_COPY(GetCoreNetworkChangeSetResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
