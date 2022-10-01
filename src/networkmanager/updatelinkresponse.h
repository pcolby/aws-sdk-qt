// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELINKRESPONSE_H
#define QTAWS_UPDATELINKRESPONSE_H

#include "networkmanagerresponse.h"
#include "updatelinkrequest.h"

namespace QtAws {
namespace NetworkManager {

class UpdateLinkResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT UpdateLinkResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    UpdateLinkResponse(const UpdateLinkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLinkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLinkResponse)
    Q_DISABLE_COPY(UpdateLinkResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
