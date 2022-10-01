// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHUMANLOOPREQUEST_H
#define QTAWS_DESCRIBEHUMANLOOPREQUEST_H

#include "sagemakera2iruntimerequest.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class DescribeHumanLoopRequestPrivate;

class QTAWSSAGEMAKERA2IRUNTIME_EXPORT DescribeHumanLoopRequest : public SageMakerA2IRuntimeRequest {

public:
    DescribeHumanLoopRequest(const DescribeHumanLoopRequest &other);
    DescribeHumanLoopRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHumanLoopRequest)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
