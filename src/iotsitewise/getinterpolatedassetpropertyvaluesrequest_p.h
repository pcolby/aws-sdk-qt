// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTERPOLATEDASSETPROPERTYVALUESREQUEST_P_H
#define QTAWS_GETINTERPOLATEDASSETPROPERTYVALUESREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "getinterpolatedassetpropertyvaluesrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class GetInterpolatedAssetPropertyValuesRequest;

class GetInterpolatedAssetPropertyValuesRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    GetInterpolatedAssetPropertyValuesRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   GetInterpolatedAssetPropertyValuesRequest * const q);
    GetInterpolatedAssetPropertyValuesRequestPrivate(const GetInterpolatedAssetPropertyValuesRequestPrivate &other,
                                   GetInterpolatedAssetPropertyValuesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInterpolatedAssetPropertyValuesRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
