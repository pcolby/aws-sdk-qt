// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPSFORUSERRESPONSE_H
#define QTAWS_LISTGROUPSFORUSERRESPONSE_H

#include "iamresponse.h"
#include "listgroupsforuserrequest.h"

namespace QtAws {
namespace Iam {

class ListGroupsForUserResponsePrivate;

class QTAWSIAM_EXPORT ListGroupsForUserResponse : public IamResponse {
    Q_OBJECT

public:
    ListGroupsForUserResponse(const ListGroupsForUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGroupsForUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupsForUserResponse)
    Q_DISABLE_COPY(ListGroupsForUserResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
