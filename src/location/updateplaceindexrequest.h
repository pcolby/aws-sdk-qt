// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPLACEINDEXREQUEST_H
#define QTAWS_UPDATEPLACEINDEXREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class UpdatePlaceIndexRequestPrivate;

class QTAWSLOCATION_EXPORT UpdatePlaceIndexRequest : public LocationRequest {

public:
    UpdatePlaceIndexRequest(const UpdatePlaceIndexRequest &other);
    UpdatePlaceIndexRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePlaceIndexRequest)

};

} // namespace Location
} // namespace QtAws

#endif
