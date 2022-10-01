// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUSTEDADVISORCHECKSUMMARIESRESPONSE_H
#define QTAWS_DESCRIBETRUSTEDADVISORCHECKSUMMARIESRESPONSE_H

#include "supportresponse.h"
#include "describetrustedadvisorchecksummariesrequest.h"

namespace QtAws {
namespace Support {

class DescribeTrustedAdvisorCheckSummariesResponsePrivate;

class QTAWSSUPPORT_EXPORT DescribeTrustedAdvisorCheckSummariesResponse : public SupportResponse {
    Q_OBJECT

public:
    DescribeTrustedAdvisorCheckSummariesResponse(const DescribeTrustedAdvisorCheckSummariesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTrustedAdvisorCheckSummariesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrustedAdvisorCheckSummariesResponse)
    Q_DISABLE_COPY(DescribeTrustedAdvisorCheckSummariesResponse)

};

} // namespace Support
} // namespace QtAws

#endif
