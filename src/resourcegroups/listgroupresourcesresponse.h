// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPRESOURCESRESPONSE_H
#define QTAWS_LISTGROUPRESOURCESRESPONSE_H

#include "resourcegroupsresponse.h"
#include "listgroupresourcesrequest.h"

namespace QtAws {
namespace ResourceGroups {

class ListGroupResourcesResponsePrivate;

class QTAWSRESOURCEGROUPS_EXPORT ListGroupResourcesResponse : public ResourceGroupsResponse {
    Q_OBJECT

public:
    ListGroupResourcesResponse(const ListGroupResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGroupResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupResourcesResponse)
    Q_DISABLE_COPY(ListGroupResourcesResponse)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
