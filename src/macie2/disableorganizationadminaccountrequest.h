// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEORGANIZATIONADMINACCOUNTREQUEST_H
#define QTAWS_DISABLEORGANIZATIONADMINACCOUNTREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class DisableOrganizationAdminAccountRequestPrivate;

class QTAWSMACIE2_EXPORT DisableOrganizationAdminAccountRequest : public Macie2Request {

public:
    DisableOrganizationAdminAccountRequest(const DisableOrganizationAdminAccountRequest &other);
    DisableOrganizationAdminAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableOrganizationAdminAccountRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
