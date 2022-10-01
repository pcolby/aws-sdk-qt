// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTEXTKEYSFORCUSTOMPOLICYRESPONSE_H
#define QTAWS_GETCONTEXTKEYSFORCUSTOMPOLICYRESPONSE_H

#include "iamresponse.h"
#include "getcontextkeysforcustompolicyrequest.h"

namespace QtAws {
namespace Iam {

class GetContextKeysForCustomPolicyResponsePrivate;

class QTAWSIAM_EXPORT GetContextKeysForCustomPolicyResponse : public IamResponse {
    Q_OBJECT

public:
    GetContextKeysForCustomPolicyResponse(const GetContextKeysForCustomPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContextKeysForCustomPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContextKeysForCustomPolicyResponse)
    Q_DISABLE_COPY(GetContextKeysForCustomPolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
