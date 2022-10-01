// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSETPROPERTYREQUEST_H
#define QTAWS_DESCRIBEASSETPROPERTYREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeAssetPropertyRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeAssetPropertyRequest : public IoTSiteWiseRequest {

public:
    DescribeAssetPropertyRequest(const DescribeAssetPropertyRequest &other);
    DescribeAssetPropertyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAssetPropertyRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
