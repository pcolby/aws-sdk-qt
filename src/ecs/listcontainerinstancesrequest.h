// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTAINERINSTANCESREQUEST_H
#define QTAWS_LISTCONTAINERINSTANCESREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class ListContainerInstancesRequestPrivate;

class QTAWSECS_EXPORT ListContainerInstancesRequest : public EcsRequest {

public:
    ListContainerInstancesRequest(const ListContainerInstancesRequest &other);
    ListContainerInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContainerInstancesRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
