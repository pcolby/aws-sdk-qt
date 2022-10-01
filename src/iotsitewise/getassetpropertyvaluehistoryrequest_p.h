// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSETPROPERTYVALUEHISTORYREQUEST_P_H
#define QTAWS_GETASSETPROPERTYVALUEHISTORYREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "getassetpropertyvaluehistoryrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class GetAssetPropertyValueHistoryRequest;

class GetAssetPropertyValueHistoryRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    GetAssetPropertyValueHistoryRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   GetAssetPropertyValueHistoryRequest * const q);
    GetAssetPropertyValueHistoryRequestPrivate(const GetAssetPropertyValueHistoryRequestPrivate &other,
                                   GetAssetPropertyValueHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAssetPropertyValueHistoryRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
