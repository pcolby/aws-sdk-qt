// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATEPROJECTASSETSREQUEST_P_H
#define QTAWS_BATCHDISASSOCIATEPROJECTASSETSREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "batchdisassociateprojectassetsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchDisassociateProjectAssetsRequest;

class BatchDisassociateProjectAssetsRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    BatchDisassociateProjectAssetsRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   BatchDisassociateProjectAssetsRequest * const q);
    BatchDisassociateProjectAssetsRequestPrivate(const BatchDisassociateProjectAssetsRequestPrivate &other,
                                   BatchDisassociateProjectAssetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDisassociateProjectAssetsRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
