// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONVPCCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEAPPLICATIONVPCCONFIGURATIONREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "deleteapplicationvpcconfigurationrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationVpcConfigurationRequest;

class DeleteApplicationVpcConfigurationRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    DeleteApplicationVpcConfigurationRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   DeleteApplicationVpcConfigurationRequest * const q);
    DeleteApplicationVpcConfigurationRequestPrivate(const DeleteApplicationVpcConfigurationRequestPrivate &other,
                                   DeleteApplicationVpcConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationVpcConfigurationRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
