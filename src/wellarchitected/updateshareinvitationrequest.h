// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESHAREINVITATIONREQUEST_H
#define QTAWS_UPDATESHAREINVITATIONREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class UpdateShareInvitationRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT UpdateShareInvitationRequest : public WellArchitectedRequest {

public:
    UpdateShareInvitationRequest(const UpdateShareInvitationRequest &other);
    UpdateShareInvitationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateShareInvitationRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
