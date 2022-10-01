// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPLACEINDEXFORSUGGESTIONSRESPONSE_H
#define QTAWS_SEARCHPLACEINDEXFORSUGGESTIONSRESPONSE_H

#include "locationresponse.h"
#include "searchplaceindexforsuggestionsrequest.h"

namespace QtAws {
namespace Location {

class SearchPlaceIndexForSuggestionsResponsePrivate;

class QTAWSLOCATION_EXPORT SearchPlaceIndexForSuggestionsResponse : public LocationResponse {
    Q_OBJECT

public:
    SearchPlaceIndexForSuggestionsResponse(const SearchPlaceIndexForSuggestionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchPlaceIndexForSuggestionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchPlaceIndexForSuggestionsResponse)
    Q_DISABLE_COPY(SearchPlaceIndexForSuggestionsResponse)

};

} // namespace Location
} // namespace QtAws

#endif
