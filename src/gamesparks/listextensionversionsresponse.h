// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXTENSIONVERSIONSRESPONSE_H
#define QTAWS_LISTEXTENSIONVERSIONSRESPONSE_H

#include "gamesparksresponse.h"
#include "listextensionversionsrequest.h"

namespace QtAws {
namespace GameSparks {

class ListExtensionVersionsResponsePrivate;

class QTAWSGAMESPARKS_EXPORT ListExtensionVersionsResponse : public GameSparksResponse {
    Q_OBJECT

public:
    ListExtensionVersionsResponse(const ListExtensionVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListExtensionVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExtensionVersionsResponse)
    Q_DISABLE_COPY(ListExtensionVersionsResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
