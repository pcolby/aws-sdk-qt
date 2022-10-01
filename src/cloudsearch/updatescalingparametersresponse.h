// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCALINGPARAMETERSRESPONSE_H
#define QTAWS_UPDATESCALINGPARAMETERSRESPONSE_H

#include "cloudsearchresponse.h"
#include "updatescalingparametersrequest.h"

namespace QtAws {
namespace CloudSearch {

class UpdateScalingParametersResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT UpdateScalingParametersResponse : public CloudSearchResponse {
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
