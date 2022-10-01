// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTORAGECONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBESTORAGECONFIGURATIONREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "describestorageconfigurationrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeStorageConfigurationRequest;

class DescribeStorageConfigurationRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    DescribeStorageConfigurationRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   DescribeStorageConfigurationRequest * const q);
    DescribeStorageConfigurationRequestPrivate(const DescribeStorageConfigurationRequestPrivate &other,
                                   DescribeStorageConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStorageConfigurationRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
