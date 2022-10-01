// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDFLOWOUTPUTSRESPONSE_H
#define QTAWS_ADDFLOWOUTPUTSRESPONSE_H

#include "mediaconnectresponse.h"
#include "addflowoutputsrequest.h"

namespace QtAws {
namespace MediaConnect {

class AddFlowOutputsResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT AddFlowOutputsResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    AddFlowOutputsResponse(const AddFlowOutputsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddFlowOutputsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddFlowOutputsResponse)
    Q_DISABLE_COPY(AddFlowOutputsResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
