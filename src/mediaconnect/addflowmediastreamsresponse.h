// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDFLOWMEDIASTREAMSRESPONSE_H
#define QTAWS_ADDFLOWMEDIASTREAMSRESPONSE_H

#include "mediaconnectresponse.h"
#include "addflowmediastreamsrequest.h"

namespace QtAws {
namespace MediaConnect {

class AddFlowMediaStreamsResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT AddFlowMediaStreamsResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    AddFlowMediaStreamsResponse(const AddFlowMediaStreamsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddFlowMediaStreamsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddFlowMediaStreamsResponse)
    Q_DISABLE_COPY(AddFlowMediaStreamsResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
