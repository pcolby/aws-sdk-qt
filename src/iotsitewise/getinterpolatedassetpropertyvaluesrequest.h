// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTERPOLATEDASSETPROPERTYVALUESREQUEST_H
#define QTAWS_GETINTERPOLATEDASSETPROPERTYVALUESREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class GetInterpolatedAssetPropertyValuesRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT GetInterpolatedAssetPropertyValuesRequest : public IoTSiteWiseRequest {

public:
    GetInterpolatedAssetPropertyValuesRequest(const GetInterpolatedAssetPropertyValuesRequest &other);
    GetInterpolatedAssetPropertyValuesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInterpolatedAssetPropertyValuesRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
