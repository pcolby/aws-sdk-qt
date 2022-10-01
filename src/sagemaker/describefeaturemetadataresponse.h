// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFEATUREMETADATARESPONSE_H
#define QTAWS_DESCRIBEFEATUREMETADATARESPONSE_H

#include "sagemakerresponse.h"
#include "describefeaturemetadatarequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeFeatureMetadataResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeFeatureMetadataResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeFeatureMetadataResponse(const DescribeFeatureMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFeatureMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFeatureMetadataResponse)
    Q_DISABLE_COPY(DescribeFeatureMetadataResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
