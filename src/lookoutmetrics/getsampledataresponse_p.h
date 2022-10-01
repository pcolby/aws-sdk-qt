// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLEDATARESPONSE_P_H
#define QTAWS_GETSAMPLEDATARESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class GetSampleDataResponse;

class GetSampleDataResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit GetSampleDataResponsePrivate(GetSampleDataResponse * const q);

    void parseGetSampleDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSampleDataResponse)
    Q_DISABLE_COPY(GetSampleDataResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
