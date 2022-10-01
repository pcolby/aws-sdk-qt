// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTINVITATIONREQUEST_H
#define QTAWS_ACCEPTINVITATIONREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class AcceptInvitationRequestPrivate;

class QTAWSMACIE2_EXPORT AcceptInvitationRequest : public Macie2Request {

public:
    AcceptInvitationRequest(const AcceptInvitationRequest &other);
    AcceptInvitationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptInvitationRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
