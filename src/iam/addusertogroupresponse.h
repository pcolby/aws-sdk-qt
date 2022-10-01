// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDUSERTOGROUPRESPONSE_H
#define QTAWS_ADDUSERTOGROUPRESPONSE_H

#include "iamresponse.h"
#include "addusertogrouprequest.h"

namespace QtAws {
namespace Iam {

class AddUserToGroupResponsePrivate;

class QTAWSIAM_EXPORT AddUserToGroupResponse : public IamResponse {
    Q_OBJECT

public:
    AddUserToGroupResponse(const AddUserToGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddUserToGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddUserToGroupResponse)
    Q_DISABLE_COPY(AddUserToGroupResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
