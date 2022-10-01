// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGPARAMETERSRESPONSE_H
#define QTAWS_DESCRIBESCALINGPARAMETERSRESPONSE_H

#include "cloudsearchresponse.h"
#include "describescalingparametersrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeScalingParametersResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT DescribeScalingParametersResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    DescribeScalingParametersResponse(const DescribeScalingParametersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeScalingParametersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScalingParametersResponse)
    Q_DISABLE_COPY(DescribeScalingParametersResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
