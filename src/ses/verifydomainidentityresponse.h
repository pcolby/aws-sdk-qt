// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYDOMAINIDENTITYRESPONSE_H
#define QTAWS_VERIFYDOMAINIDENTITYRESPONSE_H

#include "sesresponse.h"
#include "verifydomainidentityrequest.h"

namespace QtAws {
namespace Ses {

class VerifyDomainIdentityResponsePrivate;

class QTAWSSES_EXPORT VerifyDomainIdentityResponse : public SesResponse {
    Q_OBJECT

public:
    VerifyDomainIdentityResponse(const VerifyDomainIdentityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const VerifyDomainIdentityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(VerifyDomainIdentityResponse)
    Q_DISABLE_COPY(VerifyDomainIdentityResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
