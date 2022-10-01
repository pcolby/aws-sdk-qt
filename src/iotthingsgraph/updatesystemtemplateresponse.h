// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESYSTEMTEMPLATERESPONSE_H
#define QTAWS_UPDATESYSTEMTEMPLATERESPONSE_H

#include "iotthingsgraphresponse.h"
#include "updatesystemtemplaterequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class UpdateSystemTemplateResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT UpdateSystemTemplateResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    UpdateSystemTemplateResponse(const UpdateSystemTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSystemTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSystemTemplateResponse)
    Q_DISABLE_COPY(UpdateSystemTemplateResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
