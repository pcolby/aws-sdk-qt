// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTRESOURCESHAREINVITATIONREQUEST_H
#define QTAWS_REJECTRESOURCESHAREINVITATIONREQUEST_H

#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class RejectResourceShareInvitationRequestPrivate;

class QTAWSRAM_EXPORT RejectResourceShareInvitationRequest : public RamRequest {

public:
    RejectResourceShareInvitationRequest(const RejectResourceShareInvitationRequest &other);
    RejectResourceShareInvitationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectResourceShareInvitationRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
