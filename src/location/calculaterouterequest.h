// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CALCULATEROUTEREQUEST_H
#define QTAWS_CALCULATEROUTEREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class CalculateRouteRequestPrivate;

class QTAWSLOCATION_EXPORT CalculateRouteRequest : public LocationRequest {

public:
    CalculateRouteRequest(const CalculateRouteRequest &other);
    CalculateRouteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CalculateRouteRequest)

};

} // namespace Location
} // namespace QtAws

#endif
