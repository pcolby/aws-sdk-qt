// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICIESFORTARGETRESPONSE_H
#define QTAWS_LISTPOLICIESFORTARGETRESPONSE_H

#include "organizationsresponse.h"
#include "listpoliciesfortargetrequest.h"

namespace QtAws {
namespace Organizations {

class ListPoliciesForTargetResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT ListPoliciesForTargetResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    ListPoliciesForTargetResponse(const ListPoliciesForTargetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPoliciesForTargetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPoliciesForTargetResponse)
    Q_DISABLE_COPY(ListPoliciesForTargetResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
