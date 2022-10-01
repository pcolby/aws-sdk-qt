// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPMEMBERSRESPONSE_H
#define QTAWS_LISTGROUPMEMBERSRESPONSE_H

#include "workmailresponse.h"
#include "listgroupmembersrequest.h"

namespace QtAws {
namespace WorkMail {

class ListGroupMembersResponsePrivate;

class QTAWSWORKMAIL_EXPORT ListGroupMembersResponse : public WorkMailResponse {
    Q_OBJECT

public:
    ListGroupMembersResponse(const ListGroupMembersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGroupMembersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupMembersResponse)
    Q_DISABLE_COPY(ListGroupMembersResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
