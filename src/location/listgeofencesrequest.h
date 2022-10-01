// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGEOFENCESREQUEST_H
#define QTAWS_LISTGEOFENCESREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class ListGeofencesRequestPrivate;

class QTAWSLOCATION_EXPORT ListGeofencesRequest : public LocationRequest {

public:
    ListGeofencesRequest(const ListGeofencesRequest &other);
    ListGeofencesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGeofencesRequest)

};

} // namespace Location
} // namespace QtAws

#endif
