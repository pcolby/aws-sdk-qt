// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSETMODELREQUEST_H
#define QTAWS_UPDATEASSETMODELREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateAssetModelRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT UpdateAssetModelRequest : public IoTSiteWiseRequest {

public:
    UpdateAssetModelRequest(const UpdateAssetModelRequest &other);
    UpdateAssetModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssetModelRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
