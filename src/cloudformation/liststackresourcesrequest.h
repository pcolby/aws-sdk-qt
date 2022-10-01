// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKRESOURCESREQUEST_H
#define QTAWS_LISTSTACKRESOURCESREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListStackResourcesRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT ListStackResourcesRequest : public CloudFormationRequest {

public:
    ListStackResourcesRequest(const ListStackResourcesRequest &other);
    ListStackResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStackResourcesRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
