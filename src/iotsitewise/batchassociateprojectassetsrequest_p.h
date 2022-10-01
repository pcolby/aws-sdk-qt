// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATEPROJECTASSETSREQUEST_P_H
#define QTAWS_BATCHASSOCIATEPROJECTASSETSREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "batchassociateprojectassetsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchAssociateProjectAssetsRequest;

class BatchAssociateProjectAssetsRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    BatchAssociateProjectAssetsRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   BatchAssociateProjectAssetsRequest * const q);
    BatchAssociateProjectAssetsRequestPrivate(const BatchAssociateProjectAssetsRequestPrivate &other,
                                   BatchAssociateProjectAssetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchAssociateProjectAssetsRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
