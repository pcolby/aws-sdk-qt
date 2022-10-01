// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYPOLICIESRESPONSE_H
#define QTAWS_LISTIDENTITYPOLICIESRESPONSE_H

#include "sesresponse.h"
#include "listidentitypoliciesrequest.h"

namespace QtAws {
namespace Ses {

class ListIdentityPoliciesResponsePrivate;

class QTAWSSES_EXPORT ListIdentityPoliciesResponse : public SesResponse {
    Q_OBJECT

public:
    ListIdentityPoliciesResponse(const ListIdentityPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListIdentityPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIdentityPoliciesResponse)
    Q_DISABLE_COPY(ListIdentityPoliciesResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
