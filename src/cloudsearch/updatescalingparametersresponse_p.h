// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCALINGPARAMETERSRESPONSE_P_H
#define QTAWS_UPDATESCALINGPARAMETERSRESPONSE_P_H

#include "cloudsearchresponse_p.h"

namespace QtAws {
namespace CloudSearch {

class UpdateScalingParametersResponse;

class UpdateScalingParametersResponsePrivate : public CloudSearchResponsePrivate {

public:

    explicit UpdateScalingParametersResponsePrivate(UpdateScalingParametersResponse * const q);

    void parseUpdateScalingParametersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateScalingParametersResponse)
    Q_DISABLE_COPY(UpdateScalingParametersResponsePrivate)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
