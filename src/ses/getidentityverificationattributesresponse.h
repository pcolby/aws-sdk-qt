// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYVERIFICATIONATTRIBUTESRESPONSE_H
#define QTAWS_GETIDENTITYVERIFICATIONATTRIBUTESRESPONSE_H

#include "sesresponse.h"
#include "getidentityverificationattributesrequest.h"

namespace QtAws {
namespace Ses {

class GetIdentityVerificationAttributesResponsePrivate;

class QTAWSSES_EXPORT GetIdentityVerificationAttributesResponse : public SesResponse {
    Q_OBJECT

public:
    GetIdentityVerificationAttributesResponse(const GetIdentityVerificationAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIdentityVerificationAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIdentityVerificationAttributesResponse)
    Q_DISABLE_COPY(GetIdentityVerificationAttributesResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
