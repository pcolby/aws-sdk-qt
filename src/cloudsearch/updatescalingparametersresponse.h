/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_UPDATESCALINGPARAMETERSRESPONSE_H
#define QTAWS_UPDATESCALINGPARAMETERSRESPONSE_H

#include "cloudsearchresponse.h"
#include "updatescalingparametersrequest.h"

namespace QtAws {
namespace CloudSearch {

class UpdateScalingParametersResponsePrivate;

class QTAWS_EXPORT UpdateScalingParametersResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    UpdateScalingParametersResponse(const UpdateScalingParametersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateScalingParametersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateScalingParametersResponse)
    Q_DISABLE_COPY(UpdateScalingParametersResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
