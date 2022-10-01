// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSETPROPERTYAGGREGATESREQUEST_P_H
#define QTAWS_GETASSETPROPERTYAGGREGATESREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "getassetpropertyaggregatesrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class GetAssetPropertyAggregatesRequest;

class GetAssetPropertyAggregatesRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    GetAssetPropertyAggregatesRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   GetAssetPropertyAggregatesRequest * const q);
    GetAssetPropertyAggregatesRequestPrivate(const GetAssetPropertyAggregatesRequestPrivate &other,
                                   GetAssetPropertyAggregatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAssetPropertyAggregatesRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
