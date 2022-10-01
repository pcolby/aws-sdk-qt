// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDATAPROTECTIONPOLICYRESPONSE_H
#define QTAWS_PUTDATAPROTECTIONPOLICYRESPONSE_H

#include "snsresponse.h"
#include "putdataprotectionpolicyrequest.h"

namespace QtAws {
namespace Sns {

class PutDataProtectionPolicyResponsePrivate;

class QTAWSSNS_EXPORT PutDataProtectionPolicyResponse : public SnsResponse {
    Q_OBJECT

public:
    PutDataProtectionPolicyResponse(const PutDataProtectionPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutDataProtectionPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDataProtectionPolicyResponse)
    Q_DISABLE_COPY(PutDataProtectionPolicyResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
