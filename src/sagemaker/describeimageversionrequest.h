// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEVERSIONREQUEST_H
#define QTAWS_DESCRIBEIMAGEVERSIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeImageVersionRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeImageVersionRequest : public SageMakerRequest {

public:
    DescribeImageVersionRequest(const DescribeImageVersionRequest &other);
    DescribeImageVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImageVersionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
