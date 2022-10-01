// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYPOLICYRESPONSE_H
#define QTAWS_GETKEYPOLICYRESPONSE_H

#include "kmsresponse.h"
#include "getkeypolicyrequest.h"

namespace QtAws {
namespace Kms {

class GetKeyPolicyResponsePrivate;

class QTAWSKMS_EXPORT GetKeyPolicyResponse : public KmsResponse {
    Q_OBJECT

public:
    GetKeyPolicyResponse(const GetKeyPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetKeyPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetKeyPolicyResponse)
    Q_DISABLE_COPY(GetKeyPolicyResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
