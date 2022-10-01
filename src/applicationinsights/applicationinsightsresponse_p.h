// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLICATIONINSIGHTSRESPONSE_P_H
#define QTAWS_APPLICATIONINSIGHTSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ApplicationInsights {

class ApplicationInsightsResponse;

class ApplicationInsightsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ApplicationInsightsResponsePrivate(ApplicationInsightsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ApplicationInsightsResponse)
    Q_DISABLE_COPY(ApplicationInsightsResponsePrivate)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
