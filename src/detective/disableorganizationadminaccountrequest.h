// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEORGANIZATIONADMINACCOUNTREQUEST_H
#define QTAWS_DISABLEORGANIZATIONADMINACCOUNTREQUEST_H

#include "detectiverequest.h"

namespace QtAws {
namespace Detective {

class DisableOrganizationAdminAccountRequestPrivate;

class QTAWSDETECTIVE_EXPORT DisableOrganizationAdminAccountRequest : public DetectiveRequest {

public:
    DisableOrganizationAdminAccountRequest(const DisableOrganizationAdminAccountRequest &other);
    DisableOrganizationAdminAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableOrganizationAdminAccountRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
