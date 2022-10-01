// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESYSTEMTEMPLATERESPONSE_H
#define QTAWS_CREATESYSTEMTEMPLATERESPONSE_H

#include "iotthingsgraphresponse.h"
#include "createsystemtemplaterequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class CreateSystemTemplateResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT CreateSystemTemplateResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    CreateSystemTemplateResponse(const CreateSystemTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSystemTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSystemTemplateResponse)
    Q_DISABLE_COPY(CreateSystemTemplateResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
