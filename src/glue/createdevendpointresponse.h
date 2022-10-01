// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVENDPOINTRESPONSE_H
#define QTAWS_CREATEDEVENDPOINTRESPONSE_H

#include "glueresponse.h"
#include "createdevendpointrequest.h"

namespace QtAws {
namespace Glue {

class CreateDevEndpointResponsePrivate;

class QTAWSGLUE_EXPORT CreateDevEndpointResponse : public GlueResponse {
    Q_OBJECT

public:
    CreateDevEndpointResponse(const CreateDevEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDevEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDevEndpointResponse)
    Q_DISABLE_COPY(CreateDevEndpointResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
