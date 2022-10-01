// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWEBSITECERTIFICATEAUTHORITYREQUEST_H
#define QTAWS_ASSOCIATEWEBSITECERTIFICATEAUTHORITYREQUEST_H

#include "worklinkrequest.h"

namespace QtAws {
namespace WorkLink {

class AssociateWebsiteCertificateAuthorityRequestPrivate;

class QTAWSWORKLINK_EXPORT AssociateWebsiteCertificateAuthorityRequest : public WorkLinkRequest {

public:
    AssociateWebsiteCertificateAuthorityRequest(const AssociateWebsiteCertificateAuthorityRequest &other);
    AssociateWebsiteCertificateAuthorityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateWebsiteCertificateAuthorityRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
