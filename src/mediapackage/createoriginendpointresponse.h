// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORIGINENDPOINTRESPONSE_H
#define QTAWS_CREATEORIGINENDPOINTRESPONSE_H

#include "mediapackageresponse.h"
#include "createoriginendpointrequest.h"

namespace QtAws {
namespace MediaPackage {

class CreateOriginEndpointResponsePrivate;

class QTAWSMEDIAPACKAGE_EXPORT CreateOriginEndpointResponse : public MediaPackageResponse {
    Q_OBJECT

public:
    CreateOriginEndpointResponse(const CreateOriginEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateOriginEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOriginEndpointResponse)
    Q_DISABLE_COPY(CreateOriginEndpointResponse)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
