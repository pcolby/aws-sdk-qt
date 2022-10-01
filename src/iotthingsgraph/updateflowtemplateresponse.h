// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWTEMPLATERESPONSE_H
#define QTAWS_UPDATEFLOWTEMPLATERESPONSE_H

#include "iotthingsgraphresponse.h"
#include "updateflowtemplaterequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class UpdateFlowTemplateResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT UpdateFlowTemplateResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    UpdateFlowTemplateResponse(const UpdateFlowTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFlowTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFlowTemplateResponse)
    Q_DISABLE_COPY(UpdateFlowTemplateResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
