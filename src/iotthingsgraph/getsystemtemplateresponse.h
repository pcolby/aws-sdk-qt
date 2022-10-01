// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSYSTEMTEMPLATERESPONSE_H
#define QTAWS_GETSYSTEMTEMPLATERESPONSE_H

#include "iotthingsgraphresponse.h"
#include "getsystemtemplaterequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetSystemTemplateResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT GetSystemTemplateResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    GetSystemTemplateResponse(const GetSystemTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSystemTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSystemTemplateResponse)
    Q_DISABLE_COPY(GetSystemTemplateResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
