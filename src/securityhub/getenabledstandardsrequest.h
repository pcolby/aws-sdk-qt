// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENABLEDSTANDARDSREQUEST_H
#define QTAWS_GETENABLEDSTANDARDSREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetEnabledStandardsRequestPrivate;

class QTAWSSECURITYHUB_EXPORT GetEnabledStandardsRequest : public SecurityHubRequest {

public:
    GetEnabledStandardsRequest(const GetEnabledStandardsRequest &other);
    GetEnabledStandardsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEnabledStandardsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
