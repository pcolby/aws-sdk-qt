// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCESHAREINVITATIONSREQUEST_H
#define QTAWS_GETRESOURCESHAREINVITATIONSREQUEST_H

#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class GetResourceShareInvitationsRequestPrivate;

class QTAWSRAM_EXPORT GetResourceShareInvitationsRequest : public RamRequest {

public:
    GetResourceShareInvitationsRequest(const GetResourceShareInvitationsRequest &other);
    GetResourceShareInvitationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceShareInvitationsRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
