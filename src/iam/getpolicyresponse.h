// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPOLICYRESPONSE_H
#define QTAWS_GETPOLICYRESPONSE_H

#include "iamresponse.h"
#include "getpolicyrequest.h"

namespace QtAws {
namespace Iam {

class GetPolicyResponsePrivate;

class QTAWSIAM_EXPORT GetPolicyResponse : public IamResponse {
    Q_OBJECT

public:
    GetPolicyResponse(const GetPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPolicyResponse)
    Q_DISABLE_COPY(GetPolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
