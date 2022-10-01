// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERHIERARCHYGROUPSRESPONSE_H
#define QTAWS_LISTUSERHIERARCHYGROUPSRESPONSE_H

#include "connectresponse.h"
#include "listuserhierarchygroupsrequest.h"

namespace QtAws {
namespace Connect {

class ListUserHierarchyGroupsResponsePrivate;

class QTAWSCONNECT_EXPORT ListUserHierarchyGroupsResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListUserHierarchyGroupsResponse(const ListUserHierarchyGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListUserHierarchyGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUserHierarchyGroupsResponse)
    Q_DISABLE_COPY(ListUserHierarchyGroupsResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
