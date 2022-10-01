// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBSCRIBEDWORKTEAMREQUEST_H
#define QTAWS_DESCRIBESUBSCRIBEDWORKTEAMREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeSubscribedWorkteamRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeSubscribedWorkteamRequest : public SageMakerRequest {

public:
    DescribeSubscribedWorkteamRequest(const DescribeSubscribedWorkteamRequest &other);
    DescribeSubscribedWorkteamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSubscribedWorkteamRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
