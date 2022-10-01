// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPLACEINDEXFORPOSITIONRESPONSE_H
#define QTAWS_SEARCHPLACEINDEXFORPOSITIONRESPONSE_H

#include "locationresponse.h"
#include "searchplaceindexforpositionrequest.h"

namespace QtAws {
namespace Location {

class SearchPlaceIndexForPositionResponsePrivate;

class QTAWSLOCATION_EXPORT SearchPlaceIndexForPositionResponse : public LocationResponse {
    Q_OBJECT

public:
    SearchPlaceIndexForPositionResponse(const SearchPlaceIndexForPositionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchPlaceIndexForPositionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchPlaceIndexForPositionResponse)
    Q_DISABLE_COPY(SearchPlaceIndexForPositionResponse)

};

} // namespace Location
} // namespace QtAws

#endif
