// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPCERTIFICATEAUTHORITYRESPONSE_H
#define QTAWS_GETGROUPCERTIFICATEAUTHORITYRESPONSE_H

#include "greengrassresponse.h"
#include "getgroupcertificateauthorityrequest.h"

namespace QtAws {
namespace Greengrass {

class GetGroupCertificateAuthorityResponsePrivate;

class QTAWSGREENGRASS_EXPORT GetGroupCertificateAuthorityResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetGroupCertificateAuthorityResponse(const GetGroupCertificateAuthorityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGroupCertificateAuthorityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupCertificateAuthorityResponse)
    Q_DISABLE_COPY(GetGroupCertificateAuthorityResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
