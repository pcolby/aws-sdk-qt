// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYPOLICIESRESPONSE_H
#define QTAWS_LISTSECURITYPOLICIESRESPONSE_H

#include "transferresponse.h"
#include "listsecuritypoliciesrequest.h"

namespace QtAws {
namespace Transfer {

class ListSecurityPoliciesResponsePrivate;

class QTAWSTRANSFER_EXPORT ListSecurityPoliciesResponse : public TransferResponse {
    Q_OBJECT

public:
    ListSecurityPoliciesResponse(const ListSecurityPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSecurityPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSecurityPoliciesResponse)
    Q_DISABLE_COPY(ListSecurityPoliciesResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
