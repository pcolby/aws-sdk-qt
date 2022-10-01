// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERGROUPSRESPONSE_H
#define QTAWS_LISTUSERGROUPSRESPONSE_H

#include "quicksightresponse.h"
#include "listusergroupsrequest.h"

namespace QtAws {
namespace QuickSight {

class ListUserGroupsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT ListUserGroupsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    ListUserGroupsResponse(const ListUserGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListUserGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUserGroupsResponse)
    Q_DISABLE_COPY(ListUserGroupsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
