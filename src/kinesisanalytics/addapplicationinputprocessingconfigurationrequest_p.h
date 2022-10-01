// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONINPUTPROCESSINGCONFIGURATIONREQUEST_P_H
#define QTAWS_ADDAPPLICATIONINPUTPROCESSINGCONFIGURATIONREQUEST_P_H

#include "kinesisanalyticsrequest_p.h"
#include "addapplicationinputprocessingconfigurationrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class AddApplicationInputProcessingConfigurationRequest;

class AddApplicationInputProcessingConfigurationRequestPrivate : public KinesisAnalyticsRequestPrivate {

public:
    AddApplicationInputProcessingConfigurationRequestPrivate(const KinesisAnalyticsRequest::Action action,
                                   AddApplicationInputProcessingConfigurationRequest * const q);
    AddApplicationInputProcessingConfigurationRequestPrivate(const AddApplicationInputProcessingConfigurationRequestPrivate &other,
                                   AddApplicationInputProcessingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddApplicationInputProcessingConfigurationRequest)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
