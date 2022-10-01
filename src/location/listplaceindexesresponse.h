// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLACEINDEXESRESPONSE_H
#define QTAWS_LISTPLACEINDEXESRESPONSE_H

#include "locationresponse.h"
#include "listplaceindexesrequest.h"

namespace QtAws {
namespace Location {

class ListPlaceIndexesResponsePrivate;

class QTAWSLOCATION_EXPORT ListPlaceIndexesResponse : public LocationResponse {
    Q_OBJECT

public:
    ListPlaceIndexesResponse(const ListPlaceIndexesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPlaceIndexesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPlaceIndexesResponse)
    Q_DISABLE_COPY(ListPlaceIndexesResponse)

};

} // namespace Location
} // namespace QtAws

#endif
