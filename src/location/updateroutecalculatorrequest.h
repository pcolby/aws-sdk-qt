// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTECALCULATORREQUEST_H
#define QTAWS_UPDATEROUTECALCULATORREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class UpdateRouteCalculatorRequestPrivate;

class QTAWSLOCATION_EXPORT UpdateRouteCalculatorRequest : public LocationRequest {

public:
    UpdateRouteCalculatorRequest(const UpdateRouteCalculatorRequest &other);
    UpdateRouteCalculatorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRouteCalculatorRequest)

};

} // namespace Location
} // namespace QtAws

#endif
