// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEAVEORGANIZATIONREQUEST_H
#define QTAWS_LEAVEORGANIZATIONREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class LeaveOrganizationRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT LeaveOrganizationRequest : public OrganizationsRequest {

public:
    LeaveOrganizationRequest(const LeaveOrganizationRequest &other);
    LeaveOrganizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LeaveOrganizationRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
