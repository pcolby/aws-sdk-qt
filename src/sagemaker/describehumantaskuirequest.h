// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHUMANTASKUIREQUEST_H
#define QTAWS_DESCRIBEHUMANTASKUIREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeHumanTaskUiRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeHumanTaskUiRequest : public SageMakerRequest {

public:
    DescribeHumanTaskUiRequest(const DescribeHumanTaskUiRequest &other);
    DescribeHumanTaskUiRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHumanTaskUiRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
