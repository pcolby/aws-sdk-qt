// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGOVCLOUDACCOUNTREQUEST_H
#define QTAWS_CREATEGOVCLOUDACCOUNTREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class CreateGovCloudAccountRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT CreateGovCloudAccountRequest : public OrganizationsRequest {

public:
    CreateGovCloudAccountRequest(const CreateGovCloudAccountRequest &other);
    CreateGovCloudAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGovCloudAccountRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
