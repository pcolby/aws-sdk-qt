// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATEPROJECTASSETSREQUEST_H
#define QTAWS_BATCHDISASSOCIATEPROJECTASSETSREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchDisassociateProjectAssetsRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT BatchDisassociateProjectAssetsRequest : public IoTSiteWiseRequest {

public:
    BatchDisassociateProjectAssetsRequest(const BatchDisassociateProjectAssetsRequest &other);
    BatchDisassociateProjectAssetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDisassociateProjectAssetsRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
