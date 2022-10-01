// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROXYSESSIONSRESPONSE_H
#define QTAWS_LISTPROXYSESSIONSRESPONSE_H

#include "chimeresponse.h"
#include "listproxysessionsrequest.h"

namespace QtAws {
namespace Chime {

class ListProxySessionsResponsePrivate;

class QTAWSCHIME_EXPORT ListProxySessionsResponse : public ChimeResponse {
    Q_OBJECT

public:
    ListProxySessionsResponse(const ListProxySessionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProxySessionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProxySessionsResponse)
    Q_DISABLE_COPY(ListProxySessionsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
