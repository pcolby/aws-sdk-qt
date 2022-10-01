// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPLACEINDEXFORSUGGESTIONSREQUEST_H
#define QTAWS_SEARCHPLACEINDEXFORSUGGESTIONSREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class SearchPlaceIndexForSuggestionsRequestPrivate;

class QTAWSLOCATION_EXPORT SearchPlaceIndexForSuggestionsRequest : public LocationRequest {

public:
    SearchPlaceIndexForSuggestionsRequest(const SearchPlaceIndexForSuggestionsRequest &other);
    SearchPlaceIndexForSuggestionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchPlaceIndexForSuggestionsRequest)

};

} // namespace Location
} // namespace QtAws

#endif
