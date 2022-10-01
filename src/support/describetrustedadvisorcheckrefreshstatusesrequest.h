// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUSTEDADVISORCHECKREFRESHSTATUSESREQUEST_H
#define QTAWS_DESCRIBETRUSTEDADVISORCHECKREFRESHSTATUSESREQUEST_H

#include "supportrequest.h"

namespace QtAws {
namespace Support {

class DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate;

class QTAWSSUPPORT_EXPORT DescribeTrustedAdvisorCheckRefreshStatusesRequest : public SupportRequest {

public:
    DescribeTrustedAdvisorCheckRefreshStatusesRequest(const DescribeTrustedAdvisorCheckRefreshStatusesRequest &other);
    DescribeTrustedAdvisorCheckRefreshStatusesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrustedAdvisorCheckRefreshStatusesRequest)

};

} // namespace Support
} // namespace QtAws

#endif
