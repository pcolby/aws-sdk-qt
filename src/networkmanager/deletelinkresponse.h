// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELINKRESPONSE_H
#define QTAWS_DELETELINKRESPONSE_H

#include "networkmanagerresponse.h"
#include "deletelinkrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeleteLinkResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT DeleteLinkResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    DeleteLinkResponse(const DeleteLinkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLinkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLinkResponse)
    Q_DISABLE_COPY(DeleteLinkResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
