// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRUSTSTORECERTIFICATEREQUEST_H
#define QTAWS_GETTRUSTSTORECERTIFICATEREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetTrustStoreCertificateRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT GetTrustStoreCertificateRequest : public WorkSpacesWebRequest {

public:
    GetTrustStoreCertificateRequest(const GetTrustStoreCertificateRequest &other);
    GetTrustStoreCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTrustStoreCertificateRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
