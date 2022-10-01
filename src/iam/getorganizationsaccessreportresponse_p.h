// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORGANIZATIONSACCESSREPORTRESPONSE_P_H
#define QTAWS_GETORGANIZATIONSACCESSREPORTRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetOrganizationsAccessReportResponse;

class GetOrganizationsAccessReportResponsePrivate : public IamResponsePrivate {

public:

    explicit GetOrganizationsAccessReportResponsePrivate(GetOrganizationsAccessReportResponse * const q);

    void parseGetOrganizationsAccessReportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOrganizationsAccessReportResponse)
    Q_DISABLE_COPY(GetOrganizationsAccessReportResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
