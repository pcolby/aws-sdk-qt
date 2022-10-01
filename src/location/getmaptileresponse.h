// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAPTILERESPONSE_H
#define QTAWS_GETMAPTILERESPONSE_H

#include "locationresponse.h"
#include "getmaptilerequest.h"

namespace QtAws {
namespace Location {

class GetMapTileResponsePrivate;

class QTAWSLOCATION_EXPORT GetMapTileResponse : public LocationResponse {
    Q_OBJECT

public:
    GetMapTileResponse(const GetMapTileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMapTileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMapTileResponse)
    Q_DISABLE_COPY(GetMapTileResponse)

};

} // namespace Location
} // namespace QtAws

#endif
