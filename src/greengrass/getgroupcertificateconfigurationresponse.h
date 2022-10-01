// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPCERTIFICATECONFIGURATIONRESPONSE_H
#define QTAWS_GETGROUPCERTIFICATECONFIGURATIONRESPONSE_H

#include "greengrassresponse.h"
#include "getgroupcertificateconfigurationrequest.h"

namespace QtAws {
namespace Greengrass {

class GetGroupCertificateConfigurationResponsePrivate;

class QTAWSGREENGRASS_EXPORT GetGroupCertificateConfigurationResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetGroupCertificateConfigurationResponse(const GetGroupCertificateConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGroupCertificateConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupCertificateConfigurationResponse)
    Q_DISABLE_COPY(GetGroupCertificateConfigurationResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
