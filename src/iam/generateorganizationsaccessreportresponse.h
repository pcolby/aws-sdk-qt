// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEORGANIZATIONSACCESSREPORTRESPONSE_H
#define QTAWS_GENERATEORGANIZATIONSACCESSREPORTRESPONSE_H

#include "iamresponse.h"
#include "generateorganizationsaccessreportrequest.h"

namespace QtAws {
namespace Iam {

class GenerateOrganizationsAccessReportResponsePrivate;

class QTAWSIAM_EXPORT GenerateOrganizationsAccessReportResponse : public IamResponse {
    Q_OBJECT

public:
    GenerateOrganizationsAccessReportResponse(const GenerateOrganizationsAccessReportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GenerateOrganizationsAccessReportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateOrganizationsAccessReportResponse)
    Q_DISABLE_COPY(GenerateOrganizationsAccessReportResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
