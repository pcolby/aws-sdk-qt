// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEORGANIZATIONSACCESSREPORTRESPONSE_P_H
#define QTAWS_GENERATEORGANIZATIONSACCESSREPORTRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GenerateOrganizationsAccessReportResponse;

class GenerateOrganizationsAccessReportResponsePrivate : public IamResponsePrivate {

public:

    explicit GenerateOrganizationsAccessReportResponsePrivate(GenerateOrganizationsAccessReportResponse * const q);

    void parseGenerateOrganizationsAccessReportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GenerateOrganizationsAccessReportResponse)
    Q_DISABLE_COPY(GenerateOrganizationsAccessReportResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
