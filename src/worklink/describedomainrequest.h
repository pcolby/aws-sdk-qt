// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINREQUEST_H
#define QTAWS_DESCRIBEDOMAINREQUEST_H

#include "worklinkrequest.h"

namespace QtAws {
namespace WorkLink {

class DescribeDomainRequestPrivate;

class QTAWSWORKLINK_EXPORT DescribeDomainRequest : public WorkLinkRequest {

public:
    DescribeDomainRequest(const DescribeDomainRequest &other);
    DescribeDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDomainRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
