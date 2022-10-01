// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICIESRESPONSE_H
#define QTAWS_LISTPOLICIESRESPONSE_H

#include "organizationsresponse.h"
#include "listpoliciesrequest.h"

namespace QtAws {
namespace Organizations {

class ListPoliciesResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT ListPoliciesResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    ListPoliciesResponse(const ListPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPoliciesResponse)
    Q_DISABLE_COPY(ListPoliciesResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
