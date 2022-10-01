// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPACKAGERESPONSE_H
#define QTAWS_CREATEPACKAGERESPONSE_H

#include "panoramaresponse.h"
#include "createpackagerequest.h"

namespace QtAws {
namespace Panorama {

class CreatePackageResponsePrivate;

class QTAWSPANORAMA_EXPORT CreatePackageResponse : public PanoramaResponse {
    Q_OBJECT

public:
    CreatePackageResponse(const CreatePackageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePackageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePackageResponse)
    Q_DISABLE_COPY(CreatePackageResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
