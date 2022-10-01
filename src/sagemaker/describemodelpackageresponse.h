// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELPACKAGERESPONSE_H
#define QTAWS_DESCRIBEMODELPACKAGERESPONSE_H

#include "sagemakerresponse.h"
#include "describemodelpackagerequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeModelPackageResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeModelPackageResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeModelPackageResponse(const DescribeModelPackageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeModelPackageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeModelPackageResponse)
    Q_DISABLE_COPY(DescribeModelPackageResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
