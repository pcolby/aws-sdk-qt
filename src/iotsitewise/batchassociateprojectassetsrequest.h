// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATEPROJECTASSETSREQUEST_H
#define QTAWS_BATCHASSOCIATEPROJECTASSETSREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchAssociateProjectAssetsRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT BatchAssociateProjectAssetsRequest : public IoTSiteWiseRequest {

public:
    BatchAssociateProjectAssetsRequest(const BatchAssociateProjectAssetsRequest &other);
    BatchAssociateProjectAssetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchAssociateProjectAssetsRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
