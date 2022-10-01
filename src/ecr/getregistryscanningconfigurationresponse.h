// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGISTRYSCANNINGCONFIGURATIONRESPONSE_H
#define QTAWS_GETREGISTRYSCANNINGCONFIGURATIONRESPONSE_H

#include "ecrresponse.h"
#include "getregistryscanningconfigurationrequest.h"

namespace QtAws {
namespace Ecr {

class GetRegistryScanningConfigurationResponsePrivate;

class QTAWSECR_EXPORT GetRegistryScanningConfigurationResponse : public EcrResponse {
    Q_OBJECT

public:
    GetRegistryScanningConfigurationResponse(const GetRegistryScanningConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRegistryScanningConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRegistryScanningConfigurationResponse)
    Q_DISABLE_COPY(GetRegistryScanningConfigurationResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
