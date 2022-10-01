// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERPACKAGEVERSIONRESPONSE_H
#define QTAWS_DEREGISTERPACKAGEVERSIONRESPONSE_H

#include "panoramaresponse.h"
#include "deregisterpackageversionrequest.h"

namespace QtAws {
namespace Panorama {

class DeregisterPackageVersionResponsePrivate;

class QTAWSPANORAMA_EXPORT DeregisterPackageVersionResponse : public PanoramaResponse {
    Q_OBJECT

public:
    DeregisterPackageVersionResponse(const DeregisterPackageVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterPackageVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterPackageVersionResponse)
    Q_DISABLE_COPY(DeregisterPackageVersionResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
