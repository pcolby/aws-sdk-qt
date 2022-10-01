// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATECREDENTIALREPORTRESPONSE_P_H
#define QTAWS_GENERATECREDENTIALREPORTRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GenerateCredentialReportResponse;

class GenerateCredentialReportResponsePrivate : public IamResponsePrivate {

public:

    explicit GenerateCredentialReportResponsePrivate(GenerateCredentialReportResponse * const q);

    void parseGenerateCredentialReportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GenerateCredentialReportResponse)
    Q_DISABLE_COPY(GenerateCredentialReportResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
