// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOBFORDEVICESRESPONSE_H
#define QTAWS_CREATEJOBFORDEVICESRESPONSE_H

#include "panoramaresponse.h"
#include "createjobfordevicesrequest.h"

namespace QtAws {
namespace Panorama {

class CreateJobForDevicesResponsePrivate;

class QTAWSPANORAMA_EXPORT CreateJobForDevicesResponse : public PanoramaResponse {
    Q_OBJECT

public:
    CreateJobForDevicesResponse(const CreateJobForDevicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateJobForDevicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateJobForDevicesResponse)
    Q_DISABLE_COPY(CreateJobForDevicesResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
