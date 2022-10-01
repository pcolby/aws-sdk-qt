// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTRESULTSREQUEST_H
#define QTAWS_GETINSIGHTRESULTSREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetInsightResultsRequestPrivate;

class QTAWSSECURITYHUB_EXPORT GetInsightResultsRequest : public SecurityHubRequest {

public:
    GetInsightResultsRequest(const GetInsightResultsRequest &other);
    GetInsightResultsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInsightResultsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
