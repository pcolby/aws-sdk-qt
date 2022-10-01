// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTAINERINSTANCESRESPONSE_H
#define QTAWS_LISTCONTAINERINSTANCESRESPONSE_H

#include "ecsresponse.h"
#include "listcontainerinstancesrequest.h"

namespace QtAws {
namespace Ecs {

class ListContainerInstancesResponsePrivate;

class QTAWSECS_EXPORT ListContainerInstancesResponse : public EcsResponse {
    Q_OBJECT

public:
    ListContainerInstancesResponse(const ListContainerInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListContainerInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContainerInstancesResponse)
    Q_DISABLE_COPY(ListContainerInstancesResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
