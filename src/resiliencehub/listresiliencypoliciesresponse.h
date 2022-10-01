// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESILIENCYPOLICIESRESPONSE_H
#define QTAWS_LISTRESILIENCYPOLICIESRESPONSE_H

#include "resiliencehubresponse.h"
#include "listresiliencypoliciesrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListResiliencyPoliciesResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT ListResiliencyPoliciesResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    ListResiliencyPoliciesResponse(const ListResiliencyPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResiliencyPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResiliencyPoliciesResponse)
    Q_DISABLE_COPY(ListResiliencyPoliciesResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
