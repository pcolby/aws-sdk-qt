// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSETPROPERTYVALUEREQUEST_P_H
#define QTAWS_GETASSETPROPERTYVALUEREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "getassetpropertyvaluerequest.h"

namespace QtAws {
namespace IoTSiteWise {

class GetAssetPropertyValueRequest;

class GetAssetPropertyValueRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    GetAssetPropertyValueRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   GetAssetPropertyValueRequest * const q);
    GetAssetPropertyValueRequestPrivate(const GetAssetPropertyValueRequestPrivate &other,
                                   GetAssetPropertyValueRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAssetPropertyValueRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
