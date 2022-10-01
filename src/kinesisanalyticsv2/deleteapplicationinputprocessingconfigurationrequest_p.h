// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONINPUTPROCESSINGCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEAPPLICATIONINPUTPROCESSINGCONFIGURATIONREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "deleteapplicationinputprocessingconfigurationrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationInputProcessingConfigurationRequest;

class DeleteApplicationInputProcessingConfigurationRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    DeleteApplicationInputProcessingConfigurationRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   DeleteApplicationInputProcessingConfigurationRequest * const q);
    DeleteApplicationInputProcessingConfigurationRequestPrivate(const DeleteApplicationInputProcessingConfigurationRequestPrivate &other,
                                   DeleteApplicationInputProcessingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationInputProcessingConfigurationRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
