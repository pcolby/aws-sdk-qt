// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORGANIZATIONSACCESSREPORTREQUEST_P_H
#define QTAWS_GETORGANIZATIONSACCESSREPORTREQUEST_P_H

#include "iamrequest_p.h"
#include "getorganizationsaccessreportrequest.h"

namespace QtAws {
namespace Iam {

class GetOrganizationsAccessReportRequest;

class GetOrganizationsAccessReportRequestPrivate : public IamRequestPrivate {

public:
    GetOrganizationsAccessReportRequestPrivate(const IamRequest::Action action,
                                   GetOrganizationsAccessReportRequest * const q);
    GetOrganizationsAccessReportRequestPrivate(const GetOrganizationsAccessReportRequestPrivate &other,
                                   GetOrganizationsAccessReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOrganizationsAccessReportRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
