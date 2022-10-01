// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATEFLOWTEMPLATERESPONSE_H
#define QTAWS_DEPRECATEFLOWTEMPLATERESPONSE_H

#include "iotthingsgraphresponse.h"
#include "deprecateflowtemplaterequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeprecateFlowTemplateResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT DeprecateFlowTemplateResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    DeprecateFlowTemplateResponse(const DeprecateFlowTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeprecateFlowTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeprecateFlowTemplateResponse)
    Q_DISABLE_COPY(DeprecateFlowTemplateResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
