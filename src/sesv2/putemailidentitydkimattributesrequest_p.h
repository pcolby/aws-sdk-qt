// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYDKIMATTRIBUTESREQUEST_P_H
#define QTAWS_PUTEMAILIDENTITYDKIMATTRIBUTESREQUEST_P_H

#include "sesv2request_p.h"
#include "putemailidentitydkimattributesrequest.h"

namespace QtAws {
namespace SESv2 {

class PutEmailIdentityDkimAttributesRequest;

class PutEmailIdentityDkimAttributesRequestPrivate : public SESv2RequestPrivate {

public:
    PutEmailIdentityDkimAttributesRequestPrivate(const SESv2Request::Action action,
                                   PutEmailIdentityDkimAttributesRequest * const q);
    PutEmailIdentityDkimAttributesRequestPrivate(const PutEmailIdentityDkimAttributesRequestPrivate &other,
                                   PutEmailIdentityDkimAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutEmailIdentityDkimAttributesRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
