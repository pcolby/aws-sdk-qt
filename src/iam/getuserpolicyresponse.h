// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERPOLICYRESPONSE_H
#define QTAWS_GETUSERPOLICYRESPONSE_H

#include "iamresponse.h"
#include "getuserpolicyrequest.h"

namespace QtAws {
namespace Iam {

class GetUserPolicyResponsePrivate;

class QTAWSIAM_EXPORT GetUserPolicyResponse : public IamResponse {
    Q_OBJECT

public:
    GetUserPolicyResponse(const GetUserPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUserPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUserPolicyResponse)
    Q_DISABLE_COPY(GetUserPolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
