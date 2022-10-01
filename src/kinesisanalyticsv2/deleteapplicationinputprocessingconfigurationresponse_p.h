// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONINPUTPROCESSINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEAPPLICATIONINPUTPROCESSINGCONFIGURATIONRESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationInputProcessingConfigurationResponse;

class DeleteApplicationInputProcessingConfigurationResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit DeleteApplicationInputProcessingConfigurationResponsePrivate(DeleteApplicationInputProcessingConfigurationResponse * const q);

    void parseDeleteApplicationInputProcessingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationInputProcessingConfigurationResponse)
    Q_DISABLE_COPY(DeleteApplicationInputProcessingConfigurationResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
