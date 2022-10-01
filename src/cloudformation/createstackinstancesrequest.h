// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTACKINSTANCESREQUEST_H
#define QTAWS_CREATESTACKINSTANCESREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class CreateStackInstancesRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT CreateStackInstancesRequest : public CloudFormationRequest {

public:
    CreateStackInstancesRequest(const CreateStackInstancesRequest &other);
    CreateStackInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStackInstancesRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
