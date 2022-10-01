// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEAPPLICATIONINSTANCERESPONSE_H
#define QTAWS_REMOVEAPPLICATIONINSTANCERESPONSE_H

#include "panoramaresponse.h"
#include "removeapplicationinstancerequest.h"

namespace QtAws {
namespace Panorama {

class RemoveApplicationInstanceResponsePrivate;

class QTAWSPANORAMA_EXPORT RemoveApplicationInstanceResponse : public PanoramaResponse {
    Q_OBJECT

public:
    RemoveApplicationInstanceResponse(const RemoveApplicationInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveApplicationInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveApplicationInstanceResponse)
    Q_DISABLE_COPY(RemoveApplicationInstanceResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
