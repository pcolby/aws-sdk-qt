// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATELINKRESPONSE_H
#define QTAWS_ASSOCIATELINKRESPONSE_H

#include "networkmanagerresponse.h"
#include "associatelinkrequest.h"

namespace QtAws {
namespace NetworkManager {

class AssociateLinkResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT AssociateLinkResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    AssociateLinkResponse(const AssociateLinkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateLinkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateLinkResponse)
    Q_DISABLE_COPY(AssociateLinkResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
