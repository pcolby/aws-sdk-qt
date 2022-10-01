// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSIGHTREQUEST_H
#define QTAWS_CREATEINSIGHTREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class CreateInsightRequestPrivate;

class QTAWSSECURITYHUB_EXPORT CreateInsightRequest : public SecurityHubRequest {

public:
    CreateInsightRequest(const CreateInsightRequest &other);
    CreateInsightRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInsightRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
