// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFEATURETRANSFORMATIONRESPONSE_H
#define QTAWS_DESCRIBEFEATURETRANSFORMATIONRESPONSE_H

#include "personalizeresponse.h"
#include "describefeaturetransformationrequest.h"

namespace QtAws {
namespace Personalize {

class DescribeFeatureTransformationResponsePrivate;

class QTAWSPERSONALIZE_EXPORT DescribeFeatureTransformationResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    DescribeFeatureTransformationResponse(const DescribeFeatureTransformationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFeatureTransformationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFeatureTransformationResponse)
    Q_DISABLE_COPY(DescribeFeatureTransformationResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
