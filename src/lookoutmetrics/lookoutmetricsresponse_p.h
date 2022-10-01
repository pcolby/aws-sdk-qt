// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKOUTMETRICSRESPONSE_P_H
#define QTAWS_LOOKOUTMETRICSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class LookoutMetricsResponse;

class LookoutMetricsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit LookoutMetricsResponsePrivate(LookoutMetricsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(LookoutMetricsResponse)
    Q_DISABLE_COPY(LookoutMetricsResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
