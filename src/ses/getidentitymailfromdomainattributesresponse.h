// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYMAILFROMDOMAINATTRIBUTESRESPONSE_H
#define QTAWS_GETIDENTITYMAILFROMDOMAINATTRIBUTESRESPONSE_H

#include "sesresponse.h"
#include "getidentitymailfromdomainattributesrequest.h"

namespace QtAws {
namespace Ses {

class GetIdentityMailFromDomainAttributesResponsePrivate;

class QTAWSSES_EXPORT GetIdentityMailFromDomainAttributesResponse : public SesResponse {
    Q_OBJECT

public:
    GetIdentityMailFromDomainAttributesResponse(const GetIdentityMailFromDomainAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIdentityMailFromDomainAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIdentityMailFromDomainAttributesResponse)
    Q_DISABLE_COPY(GetIdentityMailFromDomainAttributesResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
