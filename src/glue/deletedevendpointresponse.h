// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVENDPOINTRESPONSE_H
#define QTAWS_DELETEDEVENDPOINTRESPONSE_H

#include "glueresponse.h"
#include "deletedevendpointrequest.h"

namespace QtAws {
namespace Glue {

class DeleteDevEndpointResponsePrivate;

class QTAWSGLUE_EXPORT DeleteDevEndpointResponse : public GlueResponse {
    Q_OBJECT

public:
    DeleteDevEndpointResponse(const DeleteDevEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDevEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDevEndpointResponse)
    Q_DISABLE_COPY(DeleteDevEndpointResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
