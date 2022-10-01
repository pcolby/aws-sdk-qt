// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFINDINGSREQUEST_H
#define QTAWS_UPDATEFINDINGSREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class UpdateFindingsRequestPrivate;

class QTAWSSECURITYHUB_EXPORT UpdateFindingsRequest : public SecurityHubRequest {

public:
    UpdateFindingsRequest(const UpdateFindingsRequest &other);
    UpdateFindingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFindingsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
