// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GROUPRESOURCESRESPONSE_H
#define QTAWS_GROUPRESOURCESRESPONSE_H

#include "resourcegroupsresponse.h"
#include "groupresourcesrequest.h"

namespace QtAws {
namespace ResourceGroups {

class GroupResourcesResponsePrivate;

class QTAWSRESOURCEGROUPS_EXPORT GroupResourcesResponse : public ResourceGroupsResponse {
    Q_OBJECT

public:
    GroupResourcesResponse(const GroupResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GroupResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GroupResourcesResponse)
    Q_DISABLE_COPY(GroupResourcesResponse)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
