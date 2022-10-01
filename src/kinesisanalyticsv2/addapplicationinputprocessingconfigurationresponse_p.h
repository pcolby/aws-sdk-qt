// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONINPUTPROCESSINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_ADDAPPLICATIONINPUTPROCESSINGCONFIGURATIONRESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class AddApplicationInputProcessingConfigurationResponse;

class AddApplicationInputProcessingConfigurationResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit AddApplicationInputProcessingConfigurationResponsePrivate(AddApplicationInputProcessingConfigurationResponse * const q);

    void parseAddApplicationInputProcessingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddApplicationInputProcessingConfigurationResponse)
    Q_DISABLE_COPY(AddApplicationInputProcessingConfigurationResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
