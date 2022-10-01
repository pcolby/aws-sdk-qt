// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERPACKAGEVERSIONRESPONSE_H
#define QTAWS_REGISTERPACKAGEVERSIONRESPONSE_H

#include "panoramaresponse.h"
#include "registerpackageversionrequest.h"

namespace QtAws {
namespace Panorama {

class RegisterPackageVersionResponsePrivate;

class QTAWSPANORAMA_EXPORT RegisterPackageVersionResponse : public PanoramaResponse {
    Q_OBJECT

public:
    RegisterPackageVersionResponse(const RegisterPackageVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterPackageVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterPackageVersionResponse)
    Q_DISABLE_COPY(RegisterPackageVersionResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
