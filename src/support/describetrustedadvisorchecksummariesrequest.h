// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUSTEDADVISORCHECKSUMMARIESREQUEST_H
#define QTAWS_DESCRIBETRUSTEDADVISORCHECKSUMMARIESREQUEST_H

#include "supportrequest.h"

namespace QtAws {
namespace Support {

class DescribeTrustedAdvisorCheckSummariesRequestPrivate;

class QTAWSSUPPORT_EXPORT DescribeTrustedAdvisorCheckSummariesRequest : public SupportRequest {

public:
    DescribeTrustedAdvisorCheckSummariesRequest(const DescribeTrustedAdvisorCheckSummariesRequest &other);
    DescribeTrustedAdvisorCheckSummariesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrustedAdvisorCheckSummariesRequest)

};

} // namespace Support
} // namespace QtAws

#endif
