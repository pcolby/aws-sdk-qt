// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSETPROPERTYREQUEST_H
#define QTAWS_UPDATEASSETPROPERTYREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateAssetPropertyRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT UpdateAssetPropertyRequest : public IoTSiteWiseRequest {

public:
    UpdateAssetPropertyRequest(const UpdateAssetPropertyRequest &other);
    UpdateAssetPropertyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssetPropertyRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
