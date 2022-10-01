// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLACEINDEXESREQUEST_H
#define QTAWS_LISTPLACEINDEXESREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class ListPlaceIndexesRequestPrivate;

class QTAWSLOCATION_EXPORT ListPlaceIndexesRequest : public LocationRequest {

public:
    ListPlaceIndexesRequest(const ListPlaceIndexesRequest &other);
    ListPlaceIndexesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPlaceIndexesRequest)

};

} // namespace Location
} // namespace QtAws

#endif
