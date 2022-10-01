// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUSTEDADVISORCHECKRESULTREQUEST_H
#define QTAWS_DESCRIBETRUSTEDADVISORCHECKRESULTREQUEST_H

#include "supportrequest.h"

namespace QtAws {
namespace Support {

class DescribeTrustedAdvisorCheckResultRequestPrivate;

class QTAWSSUPPORT_EXPORT DescribeTrustedAdvisorCheckResultRequest : public SupportRequest {

public:
    DescribeTrustedAdvisorCheckResultRequest(const DescribeTrustedAdvisorCheckResultRequest &other);
    DescribeTrustedAdvisorCheckResultRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrustedAdvisorCheckResultRequest)

};

} // namespace Support
} // namespace QtAws

#endif
