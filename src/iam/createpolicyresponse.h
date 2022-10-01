// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPOLICYRESPONSE_H
#define QTAWS_CREATEPOLICYRESPONSE_H

#include "iamresponse.h"
#include "createpolicyrequest.h"

namespace QtAws {
namespace Iam {

class CreatePolicyResponsePrivate;

class QTAWSIAM_EXPORT CreatePolicyResponse : public IamResponse {
    Q_OBJECT

public:
    CreatePolicyResponse(const CreatePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePolicyResponse)
    Q_DISABLE_COPY(CreatePolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
