// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGERESPONSE_H
#define QTAWS_DESCRIBEIMAGERESPONSE_H

#include "sagemakerresponse.h"
#include "describeimagerequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeImageResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeImageResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeImageResponse(const DescribeImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImageResponse)
    Q_DISABLE_COPY(DescribeImageResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
