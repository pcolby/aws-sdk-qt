// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUGGESTEDRESILIENCYPOLICIESRESPONSE_H
#define QTAWS_LISTSUGGESTEDRESILIENCYPOLICIESRESPONSE_H

#include "resiliencehubresponse.h"
#include "listsuggestedresiliencypoliciesrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListSuggestedResiliencyPoliciesResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT ListSuggestedResiliencyPoliciesResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    ListSuggestedResiliencyPoliciesResponse(const ListSuggestedResiliencyPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSuggestedResiliencyPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSuggestedResiliencyPoliciesResponse)
    Q_DISABLE_COPY(ListSuggestedResiliencyPoliciesResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
