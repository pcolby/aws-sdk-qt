// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLATFORMENDPOINTRESPONSE_H
#define QTAWS_CREATEPLATFORMENDPOINTRESPONSE_H

#include "snsresponse.h"
#include "createplatformendpointrequest.h"

namespace QtAws {
namespace Sns {

class CreatePlatformEndpointResponsePrivate;

class QTAWSSNS_EXPORT CreatePlatformEndpointResponse : public SnsResponse {
    Q_OBJECT

public:
    CreatePlatformEndpointResponse(const CreatePlatformEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePlatformEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePlatformEndpointResponse)
    Q_DISABLE_COPY(CreatePlatformEndpointResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
