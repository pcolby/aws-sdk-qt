// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTCLIENTVPNCLIENTCONFIGURATIONRESPONSE_H
#define QTAWS_EXPORTCLIENTVPNCLIENTCONFIGURATIONRESPONSE_H

#include "ec2response.h"
#include "exportclientvpnclientconfigurationrequest.h"

namespace QtAws {
namespace Ec2 {

class ExportClientVpnClientConfigurationResponsePrivate;

class QTAWSEC2_EXPORT ExportClientVpnClientConfigurationResponse : public Ec2Response {
    Q_OBJECT

public:
    ExportClientVpnClientConfigurationResponse(const ExportClientVpnClientConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportClientVpnClientConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportClientVpnClientConfigurationResponse)
    Q_DISABLE_COPY(ExportClientVpnClientConfigurationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
