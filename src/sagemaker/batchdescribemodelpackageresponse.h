// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDESCRIBEMODELPACKAGERESPONSE_H
#define QTAWS_BATCHDESCRIBEMODELPACKAGERESPONSE_H

#include "sagemakerresponse.h"
#include "batchdescribemodelpackagerequest.h"

namespace QtAws {
namespace SageMaker {

class BatchDescribeModelPackageResponsePrivate;

class QTAWSSAGEMAKER_EXPORT BatchDescribeModelPackageResponse : public SageMakerResponse {
    Q_OBJECT

public:
    BatchDescribeModelPackageResponse(const BatchDescribeModelPackageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDescribeModelPackageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDescribeModelPackageResponse)
    Q_DISABLE_COPY(BatchDescribeModelPackageResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
