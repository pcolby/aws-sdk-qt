// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORGANIZATIONREQUEST_H
#define QTAWS_CREATEORGANIZATIONREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class CreateOrganizationRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT CreateOrganizationRequest : public OrganizationsRequest {

public:
    CreateOrganizationRequest(const CreateOrganizationRequest &other);
    CreateOrganizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOrganizationRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
