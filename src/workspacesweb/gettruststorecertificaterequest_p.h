// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRUSTSTORECERTIFICATEREQUEST_P_H
#define QTAWS_GETTRUSTSTORECERTIFICATEREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "gettruststorecertificaterequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetTrustStoreCertificateRequest;

class GetTrustStoreCertificateRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    GetTrustStoreCertificateRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   GetTrustStoreCertificateRequest * const q);
    GetTrustStoreCertificateRequestPrivate(const GetTrustStoreCertificateRequestPrivate &other,
                                   GetTrustStoreCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTrustStoreCertificateRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
