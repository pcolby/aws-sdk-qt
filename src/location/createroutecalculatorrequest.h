// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTECALCULATORREQUEST_H
#define QTAWS_CREATEROUTECALCULATORREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class CreateRouteCalculatorRequestPrivate;

class QTAWSLOCATION_EXPORT CreateRouteCalculatorRequest : public LocationRequest {

public:
    CreateRouteCalculatorRequest(const CreateRouteCalculatorRequest &other);
    CreateRouteCalculatorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRouteCalculatorRequest)

};

} // namespace Location
} // namespace QtAws

#endif
