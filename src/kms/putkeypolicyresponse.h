// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTKEYPOLICYRESPONSE_H
#define QTAWS_PUTKEYPOLICYRESPONSE_H

#include "kmsresponse.h"
#include "putkeypolicyrequest.h"

namespace QtAws {
namespace Kms {

class PutKeyPolicyResponsePrivate;

class QTAWSKMS_EXPORT PutKeyPolicyResponse : public KmsResponse {
    Q_OBJECT

public:
    PutKeyPolicyResponse(const PutKeyPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutKeyPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutKeyPolicyResponse)
    Q_DISABLE_COPY(PutKeyPolicyResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
