// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CALCULATEROUTEMATRIXREQUEST_H
#define QTAWS_CALCULATEROUTEMATRIXREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class CalculateRouteMatrixRequestPrivate;

class QTAWSLOCATION_EXPORT CalculateRouteMatrixRequest : public LocationRequest {

public:
    CalculateRouteMatrixRequest(const CalculateRouteMatrixRequest &other);
    CalculateRouteMatrixRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CalculateRouteMatrixRequest)

};

} // namespace Location
} // namespace QtAws

#endif
