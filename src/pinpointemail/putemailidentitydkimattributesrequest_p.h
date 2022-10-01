// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYDKIMATTRIBUTESREQUEST_P_H
#define QTAWS_PUTEMAILIDENTITYDKIMATTRIBUTESREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "putemailidentitydkimattributesrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutEmailIdentityDkimAttributesRequest;

class PutEmailIdentityDkimAttributesRequestPrivate : public PinpointEmailRequestPrivate {

public:
    PutEmailIdentityDkimAttributesRequestPrivate(const PinpointEmailRequest::Action action,
                                   PutEmailIdentityDkimAttributesRequest * const q);
    PutEmailIdentityDkimAttributesRequestPrivate(const PutEmailIdentityDkimAttributesRequestPrivate &other,
                                   PutEmailIdentityDkimAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutEmailIdentityDkimAttributesRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
