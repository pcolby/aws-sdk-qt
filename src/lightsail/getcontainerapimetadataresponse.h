// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERAPIMETADATARESPONSE_H
#define QTAWS_GETCONTAINERAPIMETADATARESPONSE_H

#include "lightsailresponse.h"
#include "getcontainerapimetadatarequest.h"

namespace QtAws {
namespace Lightsail {

class GetContainerAPIMetadataResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetContainerAPIMetadataResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetContainerAPIMetadataResponse(const GetContainerAPIMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContainerAPIMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContainerAPIMetadataResponse)
    Q_DISABLE_COPY(GetContainerAPIMetadataResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
