// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTRESPONSE_H
#define QTAWS_UPDATEENDPOINTRESPONSE_H

#include "comprehendresponse.h"
#include "updateendpointrequest.h"

namespace QtAws {
namespace Comprehend {

class UpdateEndpointResponsePrivate;

class QTAWSCOMPREHEND_EXPORT UpdateEndpointResponse : public ComprehendResponse {
    Q_OBJECT

public:
    UpdateEndpointResponse(const UpdateEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEndpointResponse)
    Q_DISABLE_COPY(UpdateEndpointResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
