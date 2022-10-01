// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTACKSETOPERATIONREQUEST_H
#define QTAWS_STOPSTACKSETOPERATIONREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class StopStackSetOperationRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT StopStackSetOperationRequest : public CloudFormationRequest {

public:
    StopStackSetOperationRequest(const StopStackSetOperationRequest &other);
    StopStackSetOperationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopStackSetOperationRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
