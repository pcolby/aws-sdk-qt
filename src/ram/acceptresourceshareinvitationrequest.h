// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTRESOURCESHAREINVITATIONREQUEST_H
#define QTAWS_ACCEPTRESOURCESHAREINVITATIONREQUEST_H

#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class AcceptResourceShareInvitationRequestPrivate;

class QTAWSRAM_EXPORT AcceptResourceShareInvitationRequest : public RamRequest {

public:
    AcceptResourceShareInvitationRequest(const AcceptResourceShareInvitationRequest &other);
    AcceptResourceShareInvitationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptResourceShareInvitationRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
