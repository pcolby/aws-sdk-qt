// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEMAILIDENTITYPOLICIESRESPONSE_H
#define QTAWS_GETEMAILIDENTITYPOLICIESRESPONSE_H

#include "sesv2response.h"
#include "getemailidentitypoliciesrequest.h"

namespace QtAws {
namespace SESv2 {

class GetEmailIdentityPoliciesResponsePrivate;

class QTAWSSESV2_EXPORT GetEmailIdentityPoliciesResponse : public SESv2Response {
    Q_OBJECT

public:
    GetEmailIdentityPoliciesResponse(const GetEmailIdentityPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEmailIdentityPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEmailIdentityPoliciesResponse)
    Q_DISABLE_COPY(GetEmailIdentityPoliciesResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
