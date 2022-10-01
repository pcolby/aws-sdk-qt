// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKSETOPERATIONRESULTSREQUEST_H
#define QTAWS_LISTSTACKSETOPERATIONRESULTSREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListStackSetOperationResultsRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT ListStackSetOperationResultsRequest : public CloudFormationRequest {

public:
    ListStackSetOperationResultsRequest(const ListStackSetOperationResultsRequest &other);
    ListStackSetOperationResultsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStackSetOperationResultsRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
