// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLICATIONCOSTPROFILERRESPONSE_P_H
#define QTAWS_APPLICATIONCOSTPROFILERRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class ApplicationCostProfilerResponse;

class ApplicationCostProfilerResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ApplicationCostProfilerResponsePrivate(ApplicationCostProfilerResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ApplicationCostProfilerResponse)
    Q_DISABLE_COPY(ApplicationCostProfilerResponsePrivate)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
