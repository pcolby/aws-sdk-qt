// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVENDPOINTRESPONSE_H
#define QTAWS_GETDEVENDPOINTRESPONSE_H

#include "glueresponse.h"
#include "getdevendpointrequest.h"

namespace QtAws {
namespace Glue {

class GetDevEndpointResponsePrivate;

class QTAWSGLUE_EXPORT GetDevEndpointResponse : public GlueResponse {
    Q_OBJECT

public:
    GetDevEndpointResponse(const GetDevEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDevEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDevEndpointResponse)
    Q_DISABLE_COPY(GetDevEndpointResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
