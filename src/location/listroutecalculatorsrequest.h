// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROUTECALCULATORSREQUEST_H
#define QTAWS_LISTROUTECALCULATORSREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class ListRouteCalculatorsRequestPrivate;

class QTAWSLOCATION_EXPORT ListRouteCalculatorsRequest : public LocationRequest {

public:
    ListRouteCalculatorsRequest(const ListRouteCalculatorsRequest &other);
    ListRouteCalculatorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRouteCalculatorsRequest)

};

} // namespace Location
} // namespace QtAws

#endif
