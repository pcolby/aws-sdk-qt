// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEMAILIDENTITYPOLICYRESPONSE_H
#define QTAWS_CREATEEMAILIDENTITYPOLICYRESPONSE_H

#include "sesv2response.h"
#include "createemailidentitypolicyrequest.h"

namespace QtAws {
namespace SESv2 {

class CreateEmailIdentityPolicyResponsePrivate;

class QTAWSSESV2_EXPORT CreateEmailIdentityPolicyResponse : public SESv2Response {
    Q_OBJECT

public:
    CreateEmailIdentityPolicyResponse(const CreateEmailIdentityPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEmailIdentityPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEmailIdentityPolicyResponse)
    Q_DISABLE_COPY(CreateEmailIdentityPolicyResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
