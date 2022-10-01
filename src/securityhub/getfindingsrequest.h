// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSREQUEST_H
#define QTAWS_GETFINDINGSREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetFindingsRequestPrivate;

class QTAWSSECURITYHUB_EXPORT GetFindingsRequest : public SecurityHubRequest {

public:
    GetFindingsRequest(const GetFindingsRequest &other);
    GetFindingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFindingsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
