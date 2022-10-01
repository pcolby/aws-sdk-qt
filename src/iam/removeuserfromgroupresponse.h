// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEUSERFROMGROUPRESPONSE_H
#define QTAWS_REMOVEUSERFROMGROUPRESPONSE_H

#include "iamresponse.h"
#include "removeuserfromgrouprequest.h"

namespace QtAws {
namespace Iam {

class RemoveUserFromGroupResponsePrivate;

class QTAWSIAM_EXPORT RemoveUserFromGroupResponse : public IamResponse {
    Q_OBJECT

public:
    RemoveUserFromGroupResponse(const RemoveUserFromGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveUserFromGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveUserFromGroupResponse)
    Q_DISABLE_COPY(RemoveUserFromGroupResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
