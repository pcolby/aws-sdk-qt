// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIMAGEREQUEST_P_H
#define QTAWS_PUTIMAGEREQUEST_P_H

#include "ecrpublicrequest_p.h"
#include "putimagerequest.h"

namespace QtAws {
namespace EcrPublic {

class PutImageRequest;

class PutImageRequestPrivate : public EcrPublicRequestPrivate {

public:
    PutImageRequestPrivate(const EcrPublicRequest::Action action,
                                   PutImageRequest * const q);
    PutImageRequestPrivate(const PutImageRequestPrivate &other,
                                   PutImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutImageRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
