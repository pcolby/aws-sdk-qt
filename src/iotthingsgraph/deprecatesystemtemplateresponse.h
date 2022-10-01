// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATESYSTEMTEMPLATERESPONSE_H
#define QTAWS_DEPRECATESYSTEMTEMPLATERESPONSE_H

#include "iotthingsgraphresponse.h"
#include "deprecatesystemtemplaterequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeprecateSystemTemplateResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT DeprecateSystemTemplateResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    DeprecateSystemTemplateResponse(const DeprecateSystemTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeprecateSystemTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeprecateSystemTemplateResponse)
    Q_DISABLE_COPY(DeprecateSystemTemplateResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
