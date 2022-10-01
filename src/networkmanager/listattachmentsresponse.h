// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHMENTSRESPONSE_H
#define QTAWS_LISTATTACHMENTSRESPONSE_H

#include "networkmanagerresponse.h"
#include "listattachmentsrequest.h"

namespace QtAws {
namespace NetworkManager {

class ListAttachmentsResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT ListAttachmentsResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    ListAttachmentsResponse(const ListAttachmentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAttachmentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttachmentsResponse)
    Q_DISABLE_COPY(ListAttachmentsResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
