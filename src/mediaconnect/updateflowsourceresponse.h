// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWSOURCERESPONSE_H
#define QTAWS_UPDATEFLOWSOURCERESPONSE_H

#include "mediaconnectresponse.h"
#include "updateflowsourcerequest.h"

namespace QtAws {
namespace MediaConnect {

class UpdateFlowSourceResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT UpdateFlowSourceResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    UpdateFlowSourceResponse(const UpdateFlowSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFlowSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFlowSourceResponse)
    Q_DISABLE_COPY(UpdateFlowSourceResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
