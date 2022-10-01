// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROLEPOLICYRESPONSE_H
#define QTAWS_GETROLEPOLICYRESPONSE_H

#include "iamresponse.h"
#include "getrolepolicyrequest.h"

namespace QtAws {
namespace Iam {

class GetRolePolicyResponsePrivate;

class QTAWSIAM_EXPORT GetRolePolicyResponse : public IamResponse {
    Q_OBJECT

public:
    GetRolePolicyResponse(const GetRolePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRolePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRolePolicyResponse)
    Q_DISABLE_COPY(GetRolePolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
