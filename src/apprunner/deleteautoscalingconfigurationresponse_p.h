// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTOSCALINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEAUTOSCALINGCONFIGURATIONRESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class DeleteAutoScalingConfigurationResponse;

class DeleteAutoScalingConfigurationResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit DeleteAutoScalingConfigurationResponsePrivate(DeleteAutoScalingConfigurationResponse * const q);

    void parseDeleteAutoScalingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAutoScalingConfigurationResponse)
    Q_DISABLE_COPY(DeleteAutoScalingConfigurationResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
