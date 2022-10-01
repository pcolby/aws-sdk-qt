// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIDENTITYPOLICYRESPONSE_H
#define QTAWS_PUTIDENTITYPOLICYRESPONSE_H

#include "sesresponse.h"
#include "putidentitypolicyrequest.h"

namespace QtAws {
namespace Ses {

class PutIdentityPolicyResponsePrivate;

class QTAWSSES_EXPORT PutIdentityPolicyResponse : public SesResponse {
    Q_OBJECT

public:
    PutIdentityPolicyResponse(const PutIdentityPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutIdentityPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutIdentityPolicyResponse)
    Q_DISABLE_COPY(PutIdentityPolicyResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
