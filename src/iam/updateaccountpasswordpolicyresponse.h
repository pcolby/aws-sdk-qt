// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTPASSWORDPOLICYRESPONSE_H
#define QTAWS_UPDATEACCOUNTPASSWORDPOLICYRESPONSE_H

#include "iamresponse.h"
#include "updateaccountpasswordpolicyrequest.h"

namespace QtAws {
namespace Iam {

class UpdateAccountPasswordPolicyResponsePrivate;

class QTAWSIAM_EXPORT UpdateAccountPasswordPolicyResponse : public IamResponse {
    Q_OBJECT

public:
    UpdateAccountPasswordPolicyResponse(const UpdateAccountPasswordPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAccountPasswordPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAccountPasswordPolicyResponse)
    Q_DISABLE_COPY(UpdateAccountPasswordPolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
