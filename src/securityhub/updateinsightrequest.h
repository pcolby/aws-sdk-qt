// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSIGHTREQUEST_H
#define QTAWS_UPDATEINSIGHTREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class UpdateInsightRequestPrivate;

class QTAWSSECURITYHUB_EXPORT UpdateInsightRequest : public SecurityHubRequest {

public:
    UpdateInsightRequest(const UpdateInsightRequest &other);
    UpdateInsightRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInsightRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
