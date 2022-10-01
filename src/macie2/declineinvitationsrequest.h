// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECLINEINVITATIONSREQUEST_H
#define QTAWS_DECLINEINVITATIONSREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class DeclineInvitationsRequestPrivate;

class QTAWSMACIE2_EXPORT DeclineInvitationsRequest : public Macie2Request {

public:
    DeclineInvitationsRequest(const DeclineInvitationsRequest &other);
    DeclineInvitationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeclineInvitationsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
