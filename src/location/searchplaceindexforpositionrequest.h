// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPLACEINDEXFORPOSITIONREQUEST_H
#define QTAWS_SEARCHPLACEINDEXFORPOSITIONREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class SearchPlaceIndexForPositionRequestPrivate;

class QTAWSLOCATION_EXPORT SearchPlaceIndexForPositionRequest : public LocationRequest {

public:
    SearchPlaceIndexForPositionRequest(const SearchPlaceIndexForPositionRequest &other);
    SearchPlaceIndexForPositionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchPlaceIndexForPositionRequest)

};

} // namespace Location
} // namespace QtAws

#endif
