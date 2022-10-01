// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLOWTEMPLATERESPONSE_H
#define QTAWS_CREATEFLOWTEMPLATERESPONSE_H

#include "iotthingsgraphresponse.h"
#include "createflowtemplaterequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class CreateFlowTemplateResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT CreateFlowTemplateResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    CreateFlowTemplateResponse(const CreateFlowTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFlowTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFlowTemplateResponse)
    Q_DISABLE_COPY(CreateFlowTemplateResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
