/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_UPDATESCALINGPARAMETERSRESPONSE_P_H
#define QTAWS_UPDATESCALINGPARAMETERSRESPONSE_P_H

#include "cloudsearchresponse.h"
#include "updatescalingparametersrequest.h"

namespace AWS {

namespace CloudSearch {

class UpdateScalingParametersResponse;

class QTAWS_EXPORT UpdateScalingParametersResponsePrivate : public CloudSearchResponsePrivate {
    Q_OBJECT

public:

    UpdateScalingParametersResponsePrivate(UpdateScalingParametersResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateScalingParametersResponse)
    Q_DISABLE_COPY(UpdateScalingParametersResponsePrivate)

};

} // namespace CloudSearch
} // namespace AWS

#endif
