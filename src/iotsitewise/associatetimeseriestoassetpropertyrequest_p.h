// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETIMESERIESTOASSETPROPERTYREQUEST_P_H
#define QTAWS_ASSOCIATETIMESERIESTOASSETPROPERTYREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "associatetimeseriestoassetpropertyrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class AssociateTimeSeriesToAssetPropertyRequest;

class AssociateTimeSeriesToAssetPropertyRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    AssociateTimeSeriesToAssetPropertyRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   AssociateTimeSeriesToAssetPropertyRequest * const q);
    AssociateTimeSeriesToAssetPropertyRequestPrivate(const AssociateTimeSeriesToAssetPropertyRequestPrivate &other,
                                   AssociateTimeSeriesToAssetPropertyRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateTimeSeriesToAssetPropertyRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
