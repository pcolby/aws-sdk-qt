// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINVITATIONSREQUEST_H
#define QTAWS_CREATEINVITATIONSREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class CreateInvitationsRequestPrivate;

class QTAWSMACIE2_EXPORT CreateInvitationsRequest : public Macie2Request {

public:
    CreateInvitationsRequest(const CreateInvitationsRequest &other);
    CreateInvitationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInvitationsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
