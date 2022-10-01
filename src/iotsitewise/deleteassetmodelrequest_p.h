// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSETMODELREQUEST_P_H
#define QTAWS_DELETEASSETMODELREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "deleteassetmodelrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DeleteAssetModelRequest;

class DeleteAssetModelRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    DeleteAssetModelRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   DeleteAssetModelRequest * const q);
    DeleteAssetModelRequestPrivate(const DeleteAssetModelRequestPrivate &other,
                                   DeleteAssetModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAssetModelRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
