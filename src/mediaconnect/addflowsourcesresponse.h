// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDFLOWSOURCESRESPONSE_H
#define QTAWS_ADDFLOWSOURCESRESPONSE_H

#include "mediaconnectresponse.h"
#include "addflowsourcesrequest.h"

namespace QtAws {
namespace MediaConnect {

class AddFlowSourcesResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT AddFlowSourcesResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    AddFlowSourcesResponse(const AddFlowSourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddFlowSourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddFlowSourcesResponse)
    Q_DISABLE_COPY(AddFlowSourcesResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
