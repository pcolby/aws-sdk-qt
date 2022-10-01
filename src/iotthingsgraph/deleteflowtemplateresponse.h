// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLOWTEMPLATERESPONSE_H
#define QTAWS_DELETEFLOWTEMPLATERESPONSE_H

#include "iotthingsgraphresponse.h"
#include "deleteflowtemplaterequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeleteFlowTemplateResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT DeleteFlowTemplateResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    DeleteFlowTemplateResponse(const DeleteFlowTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFlowTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFlowTemplateResponse)
    Q_DISABLE_COPY(DeleteFlowTemplateResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
