// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITLEMENTSRESPONSE_H
#define QTAWS_LISTENTITLEMENTSRESPONSE_H

#include "mediaconnectresponse.h"
#include "listentitlementsrequest.h"

namespace QtAws {
namespace MediaConnect {

class ListEntitlementsResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT ListEntitlementsResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    ListEntitlementsResponse(const ListEntitlementsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEntitlementsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEntitlementsResponse)
    Q_DISABLE_COPY(ListEntitlementsResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
