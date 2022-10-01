// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUSTEDADVISORCHECKREFRESHSTATUSESRESPONSE_H
#define QTAWS_DESCRIBETRUSTEDADVISORCHECKREFRESHSTATUSESRESPONSE_H

#include "supportresponse.h"
#include "describetrustedadvisorcheckrefreshstatusesrequest.h"

namespace QtAws {
namespace Support {

class DescribeTrustedAdvisorCheckRefreshStatusesResponsePrivate;

class QTAWSSUPPORT_EXPORT DescribeTrustedAdvisorCheckRefreshStatusesResponse : public SupportResponse {
    Q_OBJECT

public:
    DescribeTrustedAdvisorCheckRefreshStatusesResponse(const DescribeTrustedAdvisorCheckRefreshStatusesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTrustedAdvisorCheckRefreshStatusesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrustedAdvisorCheckRefreshStatusesResponse)
    Q_DISABLE_COPY(DescribeTrustedAdvisorCheckRefreshStatusesResponse)

};

} // namespace Support
} // namespace QtAws

#endif
