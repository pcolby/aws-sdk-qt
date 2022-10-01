// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSETPROPERTYREQUEST_P_H
#define QTAWS_UPDATEASSETPROPERTYREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "updateassetpropertyrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateAssetPropertyRequest;

class UpdateAssetPropertyRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    UpdateAssetPropertyRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   UpdateAssetPropertyRequest * const q);
    UpdateAssetPropertyRequestPrivate(const UpdateAssetPropertyRequestPrivate &other,
                                   UpdateAssetPropertyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAssetPropertyRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
