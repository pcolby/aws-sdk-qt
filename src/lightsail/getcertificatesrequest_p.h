// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCERTIFICATESREQUEST_P_H
#define QTAWS_GETCERTIFICATESREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getcertificatesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetCertificatesRequest;

class GetCertificatesRequestPrivate : public LightsailRequestPrivate {

public:
    GetCertificatesRequestPrivate(const LightsailRequest::Action action,
                                   GetCertificatesRequest * const q);
    GetCertificatesRequestPrivate(const GetCertificatesRequestPrivate &other,
                                   GetCertificatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCertificatesRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
