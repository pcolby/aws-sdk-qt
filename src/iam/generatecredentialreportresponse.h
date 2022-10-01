// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATECREDENTIALREPORTRESPONSE_H
#define QTAWS_GENERATECREDENTIALREPORTRESPONSE_H

#include "iamresponse.h"
#include "generatecredentialreportrequest.h"

namespace QtAws {
namespace Iam {

class GenerateCredentialReportResponsePrivate;

class QTAWSIAM_EXPORT GenerateCredentialReportResponse : public IamResponse {
    Q_OBJECT

public:
    GenerateCredentialReportResponse(const GenerateCredentialReportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GenerateCredentialReportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateCredentialReportResponse)
    Q_DISABLE_COPY(GenerateCredentialReportResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
