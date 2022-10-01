// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICETEMPLATEVERSIONRESPONSE_H
#define QTAWS_GETSERVICETEMPLATEVERSIONRESPONSE_H

#include "protonresponse.h"
#include "getservicetemplateversionrequest.h"

namespace QtAws {
namespace Proton {

class GetServiceTemplateVersionResponsePrivate;

class QTAWSPROTON_EXPORT GetServiceTemplateVersionResponse : public ProtonResponse {
    Q_OBJECT

public:
    GetServiceTemplateVersionResponse(const GetServiceTemplateVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetServiceTemplateVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceTemplateVersionResponse)
    Q_DISABLE_COPY(GetServiceTemplateVersionResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
