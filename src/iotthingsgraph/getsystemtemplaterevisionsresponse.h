// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSYSTEMTEMPLATEREVISIONSRESPONSE_H
#define QTAWS_GETSYSTEMTEMPLATEREVISIONSRESPONSE_H

#include "iotthingsgraphresponse.h"
#include "getsystemtemplaterevisionsrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetSystemTemplateRevisionsResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT GetSystemTemplateRevisionsResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    GetSystemTemplateRevisionsResponse(const GetSystemTemplateRevisionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSystemTemplateRevisionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSystemTemplateRevisionsResponse)
    Q_DISABLE_COPY(GetSystemTemplateRevisionsResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
