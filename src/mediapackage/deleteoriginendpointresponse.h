// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORIGINENDPOINTRESPONSE_H
#define QTAWS_DELETEORIGINENDPOINTRESPONSE_H

#include "mediapackageresponse.h"
#include "deleteoriginendpointrequest.h"

namespace QtAws {
namespace MediaPackage {

class DeleteOriginEndpointResponsePrivate;

class QTAWSMEDIAPACKAGE_EXPORT DeleteOriginEndpointResponse : public MediaPackageResponse {
    Q_OBJECT

public:
    DeleteOriginEndpointResponse(const DeleteOriginEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteOriginEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOriginEndpointResponse)
    Q_DISABLE_COPY(DeleteOriginEndpointResponse)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
