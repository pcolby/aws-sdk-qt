// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONINPUTPROCESSINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_ADDAPPLICATIONINPUTPROCESSINGCONFIGURATIONRESPONSE_P_H

#include "kinesisanalyticsresponse_p.h"

namespace QtAws {
namespace KinesisAnalytics {

class AddApplicationInputProcessingConfigurationResponse;

class AddApplicationInputProcessingConfigurationResponsePrivate : public KinesisAnalyticsResponsePrivate {

public:

    explicit AddApplicationInputProcessingConfigurationResponsePrivate(AddApplicationInputProcessingConfigurationResponse * const q);

    void parseAddApplicationInputProcessingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddApplicationInputProcessingConfigurationResponse)
    Q_DISABLE_COPY(AddApplicationInputProcessingConfigurationResponsePrivate)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
