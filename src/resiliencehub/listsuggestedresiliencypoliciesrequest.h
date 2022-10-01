// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUGGESTEDRESILIENCYPOLICIESREQUEST_H
#define QTAWS_LISTSUGGESTEDRESILIENCYPOLICIESREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListSuggestedResiliencyPoliciesRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT ListSuggestedResiliencyPoliciesRequest : public ResilienceHubRequest {

public:
    ListSuggestedResiliencyPoliciesRequest(const ListSuggestedResiliencyPoliciesRequest &other);
    ListSuggestedResiliencyPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSuggestedResiliencyPoliciesRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
