// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORGANIZATIONSACCESSREPORTRESPONSE_H
#define QTAWS_GETORGANIZATIONSACCESSREPORTRESPONSE_H

#include "iamresponse.h"
#include "getorganizationsaccessreportrequest.h"

namespace QtAws {
namespace Iam {

class GetOrganizationsAccessReportResponsePrivate;

class QTAWSIAM_EXPORT GetOrganizationsAccessReportResponse : public IamResponse {
    Q_OBJECT

public:
    GetOrganizationsAccessReportResponse(const GetOrganizationsAccessReportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOrganizationsAccessReportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOrganizationsAccessReportResponse)
    Q_DISABLE_COPY(GetOrganizationsAccessReportResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
