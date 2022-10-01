// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCREDENTIALREPORTRESPONSE_P_H
#define QTAWS_GETCREDENTIALREPORTRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetCredentialReportResponse;

class GetCredentialReportResponsePrivate : public IamResponsePrivate {

public:

    explicit GetCredentialReportResponsePrivate(GetCredentialReportResponse * const q);

    void parseGetCredentialReportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCredentialReportResponse)
    Q_DISABLE_COPY(GetCredentialReportResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
