// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEVERSIONRESPONSE_H
#define QTAWS_DESCRIBEIMAGEVERSIONRESPONSE_H

#include "sagemakerresponse.h"
#include "describeimageversionrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeImageVersionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeImageVersionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeImageVersionResponse(const DescribeImageVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeImageVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImageVersionResponse)
    Q_DISABLE_COPY(DescribeImageVersionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
