// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGSERVERCERTIFICATEREQUEST_P_H
#define QTAWS_TAGSERVERCERTIFICATEREQUEST_P_H

#include "iamrequest_p.h"
#include "tagservercertificaterequest.h"

namespace QtAws {
namespace Iam {

class TagServerCertificateRequest;

class TagServerCertificateRequestPrivate : public IamRequestPrivate {

public:
    TagServerCertificateRequestPrivate(const IamRequest::Action action,
                                   TagServerCertificateRequest * const q);
    TagServerCertificateRequestPrivate(const TagServerCertificateRequestPrivate &other,
                                   TagServerCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(TagServerCertificateRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
