// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTACKINSTANCESREQUEST_H
#define QTAWS_UPDATESTACKINSTANCESREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class UpdateStackInstancesRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT UpdateStackInstancesRequest : public CloudFormationRequest {

public:
    UpdateStackInstancesRequest(const UpdateStackInstancesRequest &other);
    UpdateStackInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStackInstancesRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
