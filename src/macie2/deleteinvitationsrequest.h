// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINVITATIONSREQUEST_H
#define QTAWS_DELETEINVITATIONSREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class DeleteInvitationsRequestPrivate;

class QTAWSMACIE2_EXPORT DeleteInvitationsRequest : public Macie2Request {

public:
    DeleteInvitationsRequest(const DeleteInvitationsRequest &other);
    DeleteInvitationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInvitationsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
