// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPLACEINDEXFORTEXTREQUEST_H
#define QTAWS_SEARCHPLACEINDEXFORTEXTREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class SearchPlaceIndexForTextRequestPrivate;

class QTAWSLOCATION_EXPORT SearchPlaceIndexForTextRequest : public LocationRequest {

public:
    SearchPlaceIndexForTextRequest(const SearchPlaceIndexForTextRequest &other);
    SearchPlaceIndexForTextRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchPlaceIndexForTextRequest)

};

} // namespace Location
} // namespace QtAws

#endif
