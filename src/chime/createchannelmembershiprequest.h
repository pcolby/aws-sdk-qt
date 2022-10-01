// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELMEMBERSHIPREQUEST_H
#define QTAWS_CREATECHANNELMEMBERSHIPREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class CreateChannelMembershipRequestPrivate;

class QTAWSCHIME_EXPORT CreateChannelMembershipRequest : public ChimeRequest {

public:
    CreateChannelMembershipRequest(const CreateChannelMembershipRequest &other);
    CreateChannelMembershipRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateChannelMembershipRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
