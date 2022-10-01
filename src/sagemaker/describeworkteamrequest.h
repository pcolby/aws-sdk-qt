// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKTEAMREQUEST_H
#define QTAWS_DESCRIBEWORKTEAMREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeWorkteamRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeWorkteamRequest : public SageMakerRequest {

public:
    DescribeWorkteamRequest(const DescribeWorkteamRequest &other);
    DescribeWorkteamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkteamRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
