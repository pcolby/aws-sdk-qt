// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGROUPMEMBERSHIPREQUEST_H
#define QTAWS_CREATEGROUPMEMBERSHIPREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateGroupMembershipRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT CreateGroupMembershipRequest : public QuickSightRequest {

public:
    CreateGroupMembershipRequest(const CreateGroupMembershipRequest &other);
    CreateGroupMembershipRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGroupMembershipRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
