// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUSTEDADVISORCHECKRESULTRESPONSE_H
#define QTAWS_DESCRIBETRUSTEDADVISORCHECKRESULTRESPONSE_H

#include "supportresponse.h"
#include "describetrustedadvisorcheckresultrequest.h"

namespace QtAws {
namespace Support {

class DescribeTrustedAdvisorCheckResultResponsePrivate;

class QTAWSSUPPORT_EXPORT DescribeTrustedAdvisorCheckResultResponse : public SupportResponse {
    Q_OBJECT

public:
    DescribeTrustedAdvisorCheckResultResponse(const DescribeTrustedAdvisorCheckResultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTrustedAdvisorCheckResultRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrustedAdvisorCheckResultResponse)
    Q_DISABLE_COPY(DescribeTrustedAdvisorCheckResultResponse)

};

} // namespace Support
} // namespace QtAws

#endif
