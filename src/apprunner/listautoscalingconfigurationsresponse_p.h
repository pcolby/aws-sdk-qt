// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUTOSCALINGCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTAUTOSCALINGCONFIGURATIONSRESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class ListAutoScalingConfigurationsResponse;

class ListAutoScalingConfigurationsResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit ListAutoScalingConfigurationsResponsePrivate(ListAutoScalingConfigurationsResponse * const q);

    void parseListAutoScalingConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAutoScalingConfigurationsResponse)
    Q_DISABLE_COPY(ListAutoScalingConfigurationsResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
