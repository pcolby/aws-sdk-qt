// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTORAGECONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBESTORAGECONFIGURATIONREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeStorageConfigurationRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeStorageConfigurationRequest : public IoTSiteWiseRequest {

public:
    DescribeStorageConfigurationRequest(const DescribeStorageConfigurationRequest &other);
    DescribeStorageConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStorageConfigurationRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
