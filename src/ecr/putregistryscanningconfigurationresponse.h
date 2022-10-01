// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREGISTRYSCANNINGCONFIGURATIONRESPONSE_H
#define QTAWS_PUTREGISTRYSCANNINGCONFIGURATIONRESPONSE_H

#include "ecrresponse.h"
#include "putregistryscanningconfigurationrequest.h"

namespace QtAws {
namespace Ecr {

class PutRegistryScanningConfigurationResponsePrivate;

class QTAWSECR_EXPORT PutRegistryScanningConfigurationResponse : public EcrResponse {
    Q_OBJECT

public:
    PutRegistryScanningConfigurationResponse(const PutRegistryScanningConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRegistryScanningConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRegistryScanningConfigurationResponse)
    Q_DISABLE_COPY(PutRegistryScanningConfigurationResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
