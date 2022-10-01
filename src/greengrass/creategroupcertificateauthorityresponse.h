// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGROUPCERTIFICATEAUTHORITYRESPONSE_H
#define QTAWS_CREATEGROUPCERTIFICATEAUTHORITYRESPONSE_H

#include "greengrassresponse.h"
#include "creategroupcertificateauthorityrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateGroupCertificateAuthorityResponsePrivate;

class QTAWSGREENGRASS_EXPORT CreateGroupCertificateAuthorityResponse : public GreengrassResponse {
    Q_OBJECT

public:
    CreateGroupCertificateAuthorityResponse(const CreateGroupCertificateAuthorityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGroupCertificateAuthorityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGroupCertificateAuthorityResponse)
    Q_DISABLE_COPY(CreateGroupCertificateAuthorityResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
