// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEORIGINENDPOINTRESPONSE_H
#define QTAWS_UPDATEORIGINENDPOINTRESPONSE_H

#include "mediapackageresponse.h"
#include "updateoriginendpointrequest.h"

namespace QtAws {
namespace MediaPackage {

class UpdateOriginEndpointResponsePrivate;

class QTAWSMEDIAPACKAGE_EXPORT UpdateOriginEndpointResponse : public MediaPackageResponse {
    Q_OBJECT

public:
    UpdateOriginEndpointResponse(const UpdateOriginEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateOriginEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateOriginEndpointResponse)
    Q_DISABLE_COPY(UpdateOriginEndpointResponse)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
