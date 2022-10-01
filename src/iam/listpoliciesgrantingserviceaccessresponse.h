// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICIESGRANTINGSERVICEACCESSRESPONSE_H
#define QTAWS_LISTPOLICIESGRANTINGSERVICEACCESSRESPONSE_H

#include "iamresponse.h"
#include "listpoliciesgrantingserviceaccessrequest.h"

namespace QtAws {
namespace Iam {

class ListPoliciesGrantingServiceAccessResponsePrivate;

class QTAWSIAM_EXPORT ListPoliciesGrantingServiceAccessResponse : public IamResponse {
    Q_OBJECT

public:
    ListPoliciesGrantingServiceAccessResponse(const ListPoliciesGrantingServiceAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPoliciesGrantingServiceAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPoliciesGrantingServiceAccessResponse)
    Q_DISABLE_COPY(ListPoliciesGrantingServiceAccessResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
