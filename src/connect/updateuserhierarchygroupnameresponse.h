// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERHIERARCHYGROUPNAMERESPONSE_H
#define QTAWS_UPDATEUSERHIERARCHYGROUPNAMERESPONSE_H

#include "connectresponse.h"
#include "updateuserhierarchygroupnamerequest.h"

namespace QtAws {
namespace Connect {

class UpdateUserHierarchyGroupNameResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateUserHierarchyGroupNameResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateUserHierarchyGroupNameResponse(const UpdateUserHierarchyGroupNameRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateUserHierarchyGroupNameRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserHierarchyGroupNameResponse)
    Q_DISABLE_COPY(UpdateUserHierarchyGroupNameResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
