// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAPSPRITESRESPONSE_H
#define QTAWS_GETMAPSPRITESRESPONSE_H

#include "locationresponse.h"
#include "getmapspritesrequest.h"

namespace QtAws {
namespace Location {

class GetMapSpritesResponsePrivate;

class QTAWSLOCATION_EXPORT GetMapSpritesResponse : public LocationResponse {
    Q_OBJECT

public:
    GetMapSpritesResponse(const GetMapSpritesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMapSpritesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMapSpritesResponse)
    Q_DISABLE_COPY(GetMapSpritesResponse)

};

} // namespace Location
} // namespace QtAws

#endif
