// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINREQUEST_P_H
#define QTAWS_UPDATEDOMAINREQUEST_P_H

#include "voiceidrequest_p.h"
#include "updatedomainrequest.h"

namespace QtAws {
namespace VoiceId {

class UpdateDomainRequest;

class UpdateDomainRequestPrivate : public VoiceIdRequestPrivate {

public:
    UpdateDomainRequestPrivate(const VoiceIdRequest::Action action,
                                   UpdateDomainRequest * const q);
    UpdateDomainRequestPrivate(const UpdateDomainRequestPrivate &other,
                                   UpdateDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDomainRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
