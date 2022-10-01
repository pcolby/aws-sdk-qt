// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVENDPOINTRESPONSE_H
#define QTAWS_UPDATEDEVENDPOINTRESPONSE_H

#include "glueresponse.h"
#include "updatedevendpointrequest.h"

namespace QtAws {
namespace Glue {

class UpdateDevEndpointResponsePrivate;

class QTAWSGLUE_EXPORT UpdateDevEndpointResponse : public GlueResponse {
    Q_OBJECT

public:
    UpdateDevEndpointResponse(const UpdateDevEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDevEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDevEndpointResponse)
    Q_DISABLE_COPY(UpdateDevEndpointResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
