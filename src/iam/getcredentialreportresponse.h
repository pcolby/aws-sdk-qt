// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCREDENTIALREPORTRESPONSE_H
#define QTAWS_GETCREDENTIALREPORTRESPONSE_H

#include "iamresponse.h"
#include "getcredentialreportrequest.h"

namespace QtAws {
namespace Iam {

class GetCredentialReportResponsePrivate;

class QTAWSIAM_EXPORT GetCredentialReportResponse : public IamResponse {
    Q_OBJECT

public:
    GetCredentialReportResponse(const GetCredentialReportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCredentialReportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCredentialReportResponse)
    Q_DISABLE_COPY(GetCredentialReportResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
