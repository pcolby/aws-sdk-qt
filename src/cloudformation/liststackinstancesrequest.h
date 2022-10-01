// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKINSTANCESREQUEST_H
#define QTAWS_LISTSTACKINSTANCESREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListStackInstancesRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT ListStackInstancesRequest : public CloudFormationRequest {

public:
    ListStackInstancesRequest(const ListStackInstancesRequest &other);
    ListStackInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStackInstancesRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
