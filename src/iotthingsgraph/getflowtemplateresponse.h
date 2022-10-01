// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFLOWTEMPLATERESPONSE_H
#define QTAWS_GETFLOWTEMPLATERESPONSE_H

#include "iotthingsgraphresponse.h"
#include "getflowtemplaterequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetFlowTemplateResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT GetFlowTemplateResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    GetFlowTemplateResponse(const GetFlowTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFlowTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFlowTemplateResponse)
    Q_DISABLE_COPY(GetFlowTemplateResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
