// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILIDENTITYPOLICYRESPONSE_H
#define QTAWS_DELETEEMAILIDENTITYPOLICYRESPONSE_H

#include "sesv2response.h"
#include "deleteemailidentitypolicyrequest.h"

namespace QtAws {
namespace SESv2 {

class DeleteEmailIdentityPolicyResponsePrivate;

class QTAWSSESV2_EXPORT DeleteEmailIdentityPolicyResponse : public SESv2Response {
    Q_OBJECT

public:
    DeleteEmailIdentityPolicyResponse(const DeleteEmailIdentityPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEmailIdentityPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEmailIdentityPolicyResponse)
    Q_DISABLE_COPY(DeleteEmailIdentityPolicyResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
