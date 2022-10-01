// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONINPUTPROCESSINGCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEAPPLICATIONINPUTPROCESSINGCONFIGURATIONREQUEST_P_H

#include "kinesisanalyticsrequest_p.h"
#include "deleteapplicationinputprocessingconfigurationrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class DeleteApplicationInputProcessingConfigurationRequest;

class DeleteApplicationInputProcessingConfigurationRequestPrivate : public KinesisAnalyticsRequestPrivate {

public:
    DeleteApplicationInputProcessingConfigurationRequestPrivate(const KinesisAnalyticsRequest::Action action,
                                   DeleteApplicationInputProcessingConfigurationRequest * const q);
    DeleteApplicationInputProcessingConfigurationRequestPrivate(const DeleteApplicationInputProcessingConfigurationRequestPrivate &other,
                                   DeleteApplicationInputProcessingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationInputProcessingConfigurationRequest)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
