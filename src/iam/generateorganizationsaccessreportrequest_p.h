// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEORGANIZATIONSACCESSREPORTREQUEST_P_H
#define QTAWS_GENERATEORGANIZATIONSACCESSREPORTREQUEST_P_H

#include "iamrequest_p.h"
#include "generateorganizationsaccessreportrequest.h"

namespace QtAws {
namespace Iam {

class GenerateOrganizationsAccessReportRequest;

class GenerateOrganizationsAccessReportRequestPrivate : public IamRequestPrivate {

public:
    GenerateOrganizationsAccessReportRequestPrivate(const IamRequest::Action action,
                                   GenerateOrganizationsAccessReportRequest * const q);
    GenerateOrganizationsAccessReportRequestPrivate(const GenerateOrganizationsAccessReportRequestPrivate &other,
                                   GenerateOrganizationsAccessReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(GenerateOrganizationsAccessReportRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
