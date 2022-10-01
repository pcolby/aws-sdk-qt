// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONVPCCONFIGURATIONREQUEST_P_H
#define QTAWS_ADDAPPLICATIONVPCCONFIGURATIONREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "addapplicationvpcconfigurationrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class AddApplicationVpcConfigurationRequest;

class AddApplicationVpcConfigurationRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    AddApplicationVpcConfigurationRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   AddApplicationVpcConfigurationRequest * const q);
    AddApplicationVpcConfigurationRequestPrivate(const AddApplicationVpcConfigurationRequestPrivate &other,
                                   AddApplicationVpcConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddApplicationVpcConfigurationRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
