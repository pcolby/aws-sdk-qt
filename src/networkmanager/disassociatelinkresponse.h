// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATELINKRESPONSE_H
#define QTAWS_DISASSOCIATELINKRESPONSE_H

#include "networkmanagerresponse.h"
#include "disassociatelinkrequest.h"

namespace QtAws {
namespace NetworkManager {

class DisassociateLinkResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT DisassociateLinkResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    DisassociateLinkResponse(const DisassociateLinkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateLinkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateLinkResponse)
    Q_DISABLE_COPY(DisassociateLinkResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
