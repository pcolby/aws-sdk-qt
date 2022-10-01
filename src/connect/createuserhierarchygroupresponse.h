// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERHIERARCHYGROUPRESPONSE_H
#define QTAWS_CREATEUSERHIERARCHYGROUPRESPONSE_H

#include "connectresponse.h"
#include "createuserhierarchygrouprequest.h"

namespace QtAws {
namespace Connect {

class CreateUserHierarchyGroupResponsePrivate;

class QTAWSCONNECT_EXPORT CreateUserHierarchyGroupResponse : public ConnectResponse {
    Q_OBJECT

public:
    CreateUserHierarchyGroupResponse(const CreateUserHierarchyGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateUserHierarchyGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUserHierarchyGroupResponse)
    Q_DISABLE_COPY(CreateUserHierarchyGroupResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
