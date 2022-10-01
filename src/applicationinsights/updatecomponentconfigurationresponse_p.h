// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMPONENTCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATECOMPONENTCONFIGURATIONRESPONSE_P_H

#include "applicationinsightsresponse_p.h"

namespace QtAws {
namespace ApplicationInsights {

class UpdateComponentConfigurationResponse;

class UpdateComponentConfigurationResponsePrivate : public ApplicationInsightsResponsePrivate {

public:

    explicit UpdateComponentConfigurationResponsePrivate(UpdateComponentConfigurationResponse * const q);

    void parseUpdateComponentConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateComponentConfigurationResponse)
    Q_DISABLE_COPY(UpdateComponentConfigurationResponsePrivate)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
