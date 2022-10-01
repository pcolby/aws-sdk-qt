// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSETMODELREQUEST_P_H
#define QTAWS_UPDATEASSETMODELREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "updateassetmodelrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateAssetModelRequest;

class UpdateAssetModelRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    UpdateAssetModelRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   UpdateAssetModelRequest * const q);
    UpdateAssetModelRequestPrivate(const UpdateAssetModelRequestPrivate &other,
                                   UpdateAssetModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAssetModelRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
