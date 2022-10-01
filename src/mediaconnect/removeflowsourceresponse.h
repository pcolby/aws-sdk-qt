// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFLOWSOURCERESPONSE_H
#define QTAWS_REMOVEFLOWSOURCERESPONSE_H

#include "mediaconnectresponse.h"
#include "removeflowsourcerequest.h"

namespace QtAws {
namespace MediaConnect {

class RemoveFlowSourceResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT RemoveFlowSourceResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    RemoveFlowSourceResponse(const RemoveFlowSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveFlowSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveFlowSourceResponse)
    Q_DISABLE_COPY(RemoveFlowSourceResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
