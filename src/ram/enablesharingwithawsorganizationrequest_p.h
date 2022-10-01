// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESHARINGWITHAWSORGANIZATIONREQUEST_P_H
#define QTAWS_ENABLESHARINGWITHAWSORGANIZATIONREQUEST_P_H

#include "ramrequest_p.h"
#include "enablesharingwithawsorganizationrequest.h"

namespace QtAws {
namespace Ram {

class EnableSharingWithAwsOrganizationRequest;

class EnableSharingWithAwsOrganizationRequestPrivate : public RamRequestPrivate {

public:
    EnableSharingWithAwsOrganizationRequestPrivate(const RamRequest::Action action,
                                   EnableSharingWithAwsOrganizationRequest * const q);
    EnableSharingWithAwsOrganizationRequestPrivate(const EnableSharingWithAwsOrganizationRequestPrivate &other,
                                   EnableSharingWithAwsOrganizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableSharingWithAwsOrganizationRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
