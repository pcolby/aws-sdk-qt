// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYPOLICIESRESPONSE_H
#define QTAWS_GETIDENTITYPOLICIESRESPONSE_H

#include "sesresponse.h"
#include "getidentitypoliciesrequest.h"

namespace QtAws {
namespace Ses {

class GetIdentityPoliciesResponsePrivate;

class QTAWSSES_EXPORT GetIdentityPoliciesResponse : public SesResponse {
    Q_OBJECT

public:
    GetIdentityPoliciesResponse(const GetIdentityPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIdentityPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIdentityPoliciesResponse)
    Q_DISABLE_COPY(GetIdentityPoliciesResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
