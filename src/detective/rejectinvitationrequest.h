// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTINVITATIONREQUEST_H
#define QTAWS_REJECTINVITATIONREQUEST_H

#include "detectiverequest.h"

namespace QtAws {
namespace Detective {

class RejectInvitationRequestPrivate;

class QTAWSDETECTIVE_EXPORT RejectInvitationRequest : public DetectiveRequest {

public:
    RejectInvitationRequest(const RejectInvitationRequest &other);
    RejectInvitationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectInvitationRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
