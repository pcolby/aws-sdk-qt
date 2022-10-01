// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUSTEDADVISORCHECKSREQUEST_H
#define QTAWS_DESCRIBETRUSTEDADVISORCHECKSREQUEST_H

#include "supportrequest.h"

namespace QtAws {
namespace Support {

class DescribeTrustedAdvisorChecksRequestPrivate;

class QTAWSSUPPORT_EXPORT DescribeTrustedAdvisorChecksRequest : public SupportRequest {

public:
    DescribeTrustedAdvisorChecksRequest(const DescribeTrustedAdvisorChecksRequest &other);
    DescribeTrustedAdvisorChecksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrustedAdvisorChecksRequest)

};

} // namespace Support
} // namespace QtAws

#endif
