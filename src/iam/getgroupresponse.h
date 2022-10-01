// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPRESPONSE_H
#define QTAWS_GETGROUPRESPONSE_H

#include "iamresponse.h"
#include "getgrouprequest.h"

namespace QtAws {
namespace Iam {

class GetGroupResponsePrivate;

class QTAWSIAM_EXPORT GetGroupResponse : public IamResponse {
    Q_OBJECT

public:
    GetGroupResponse(const GetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupResponse)
    Q_DISABLE_COPY(GetGroupResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
