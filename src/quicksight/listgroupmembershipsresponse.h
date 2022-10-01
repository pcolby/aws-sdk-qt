// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPMEMBERSHIPSRESPONSE_H
#define QTAWS_LISTGROUPMEMBERSHIPSRESPONSE_H

#include "quicksightresponse.h"
#include "listgroupmembershipsrequest.h"

namespace QtAws {
namespace QuickSight {

class ListGroupMembershipsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT ListGroupMembershipsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    ListGroupMembershipsResponse(const ListGroupMembershipsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGroupMembershipsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupMembershipsResponse)
    Q_DISABLE_COPY(ListGroupMembershipsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
