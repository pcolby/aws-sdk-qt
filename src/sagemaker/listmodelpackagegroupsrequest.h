// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELPACKAGEGROUPSREQUEST_H
#define QTAWS_LISTMODELPACKAGEGROUPSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListModelPackageGroupsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListModelPackageGroupsRequest : public SageMakerRequest {

public:
    ListModelPackageGroupsRequest(const ListModelPackageGroupsRequest &other);
    ListModelPackageGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListModelPackageGroupsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
