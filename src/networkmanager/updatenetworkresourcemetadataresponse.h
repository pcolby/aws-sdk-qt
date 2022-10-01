// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKRESOURCEMETADATARESPONSE_H
#define QTAWS_UPDATENETWORKRESOURCEMETADATARESPONSE_H

#include "networkmanagerresponse.h"
#include "updatenetworkresourcemetadatarequest.h"

namespace QtAws {
namespace NetworkManager {

class UpdateNetworkResourceMetadataResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT UpdateNetworkResourceMetadataResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    UpdateNetworkResourceMetadataResponse(const UpdateNetworkResourceMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateNetworkResourceMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNetworkResourceMetadataResponse)
    Q_DISABLE_COPY(UpdateNetworkResourceMetadataResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
