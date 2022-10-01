// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICIESFORTARGETREQUEST_H
#define QTAWS_LISTPOLICIESFORTARGETREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class ListPoliciesForTargetRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT ListPoliciesForTargetRequest : public OrganizationsRequest {

public:
    ListPoliciesForTargetRequest(const ListPoliciesForTargetRequest &other);
    ListPoliciesForTargetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPoliciesForTargetRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
