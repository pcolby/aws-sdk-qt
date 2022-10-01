// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONINPUTPROCESSINGCONFIGURATIONREQUEST_P_H
#define QTAWS_ADDAPPLICATIONINPUTPROCESSINGCONFIGURATIONREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "addapplicationinputprocessingconfigurationrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class AddApplicationInputProcessingConfigurationRequest;

class AddApplicationInputProcessingConfigurationRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    AddApplicationInputProcessingConfigurationRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   AddApplicationInputProcessingConfigurationRequest * const q);
    AddApplicationInputProcessingConfigurationRequestPrivate(const AddApplicationInputProcessingConfigurationRequestPrivate &other,
                                   AddApplicationInputProcessingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddApplicationInputProcessingConfigurationRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
