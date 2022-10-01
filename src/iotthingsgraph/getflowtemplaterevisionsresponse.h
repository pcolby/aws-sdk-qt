// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFLOWTEMPLATEREVISIONSRESPONSE_H
#define QTAWS_GETFLOWTEMPLATEREVISIONSRESPONSE_H

#include "iotthingsgraphresponse.h"
#include "getflowtemplaterevisionsrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetFlowTemplateRevisionsResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT GetFlowTemplateRevisionsResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    GetFlowTemplateRevisionsResponse(const GetFlowTemplateRevisionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFlowTemplateRevisionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFlowTemplateRevisionsResponse)
    Q_DISABLE_COPY(GetFlowTemplateRevisionsResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
