// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUGGESTREQUEST_H
#define QTAWS_SUGGESTREQUEST_H

#include "cloudsearchdomainrequest.h"

namespace QtAws {
namespace CloudSearchDomain {

class SuggestRequestPrivate;

class QTAWSCLOUDSEARCHDOMAIN_EXPORT SuggestRequest : public CloudSearchDomainRequest {

public:
    SuggestRequest(const SuggestRequest &other);
    SuggestRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SuggestRequest)

};

} // namespace CloudSearchDomain
} // namespace QtAws

#endif
