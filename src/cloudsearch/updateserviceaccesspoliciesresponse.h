// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEACCESSPOLICIESRESPONSE_H
#define QTAWS_UPDATESERVICEACCESSPOLICIESRESPONSE_H

#include "cloudsearchresponse.h"
#include "updateserviceaccesspoliciesrequest.h"

namespace QtAws {
namespace CloudSearch {

class UpdateServiceAccessPoliciesResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT UpdateServiceAccessPoliciesResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    UpdateServiceAccessPoliciesResponse(const UpdateServiceAccessPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateServiceAccessPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServiceAccessPoliciesResponse)
    Q_DISABLE_COPY(UpdateServiceAccessPoliciesResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
