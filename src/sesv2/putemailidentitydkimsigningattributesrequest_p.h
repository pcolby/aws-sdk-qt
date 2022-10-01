// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYDKIMSIGNINGATTRIBUTESREQUEST_P_H
#define QTAWS_PUTEMAILIDENTITYDKIMSIGNINGATTRIBUTESREQUEST_P_H

#include "sesv2request_p.h"
#include "putemailidentitydkimsigningattributesrequest.h"

namespace QtAws {
namespace SESv2 {

class PutEmailIdentityDkimSigningAttributesRequest;

class PutEmailIdentityDkimSigningAttributesRequestPrivate : public SESv2RequestPrivate {

public:
    PutEmailIdentityDkimSigningAttributesRequestPrivate(const SESv2Request::Action action,
                                   PutEmailIdentityDkimSigningAttributesRequest * const q);
    PutEmailIdentityDkimSigningAttributesRequestPrivate(const PutEmailIdentityDkimSigningAttributesRequestPrivate &other,
                                   PutEmailIdentityDkimSigningAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutEmailIdentityDkimSigningAttributesRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
