// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESYSTEMTEMPLATERESPONSE_H
#define QTAWS_DELETESYSTEMTEMPLATERESPONSE_H

#include "iotthingsgraphresponse.h"
#include "deletesystemtemplaterequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeleteSystemTemplateResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT DeleteSystemTemplateResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    DeleteSystemTemplateResponse(const DeleteSystemTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSystemTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSystemTemplateResponse)
    Q_DISABLE_COPY(DeleteSystemTemplateResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
