// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESILIENCYPOLICIESREQUEST_H
#define QTAWS_LISTRESILIENCYPOLICIESREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListResiliencyPoliciesRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT ListResiliencyPoliciesRequest : public ResilienceHubRequest {

public:
    ListResiliencyPoliciesRequest(const ListResiliencyPoliciesRequest &other);
    ListResiliencyPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResiliencyPoliciesRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
