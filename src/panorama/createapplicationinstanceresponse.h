// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONINSTANCERESPONSE_H
#define QTAWS_CREATEAPPLICATIONINSTANCERESPONSE_H

#include "panoramaresponse.h"
#include "createapplicationinstancerequest.h"

namespace QtAws {
namespace Panorama {

class CreateApplicationInstanceResponsePrivate;

class QTAWSPANORAMA_EXPORT CreateApplicationInstanceResponse : public PanoramaResponse {
    Q_OBJECT

public:
    CreateApplicationInstanceResponse(const CreateApplicationInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateApplicationInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApplicationInstanceResponse)
    Q_DISABLE_COPY(CreateApplicationInstanceResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
