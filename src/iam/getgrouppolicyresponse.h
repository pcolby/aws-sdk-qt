// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPPOLICYRESPONSE_H
#define QTAWS_GETGROUPPOLICYRESPONSE_H

#include "iamresponse.h"
#include "getgrouppolicyrequest.h"

namespace QtAws {
namespace Iam {

class GetGroupPolicyResponsePrivate;

class QTAWSIAM_EXPORT GetGroupPolicyResponse : public IamResponse {
    Q_OBJECT

public:
    GetGroupPolicyResponse(const GetGroupPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGroupPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupPolicyResponse)
    Q_DISABLE_COPY(GetGroupPolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
