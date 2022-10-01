// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFEATUREGROUPSREQUEST_H
#define QTAWS_LISTFEATUREGROUPSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListFeatureGroupsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListFeatureGroupsRequest : public SageMakerRequest {

public:
    ListFeatureGroupsRequest(const ListFeatureGroupsRequest &other);
    ListFeatureGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFeatureGroupsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
