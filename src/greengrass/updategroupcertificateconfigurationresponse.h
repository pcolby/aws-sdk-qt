// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGROUPCERTIFICATECONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEGROUPCERTIFICATECONFIGURATIONRESPONSE_H

#include "greengrassresponse.h"
#include "updategroupcertificateconfigurationrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateGroupCertificateConfigurationResponsePrivate;

class QTAWSGREENGRASS_EXPORT UpdateGroupCertificateConfigurationResponse : public GreengrassResponse {
    Q_OBJECT

public:
    UpdateGroupCertificateConfigurationResponse(const UpdateGroupCertificateConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGroupCertificateConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGroupCertificateConfigurationResponse)
    Q_DISABLE_COPY(UpdateGroupCertificateConfigurationResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
