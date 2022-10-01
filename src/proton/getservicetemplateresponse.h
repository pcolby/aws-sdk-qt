// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICETEMPLATERESPONSE_H
#define QTAWS_GETSERVICETEMPLATERESPONSE_H

#include "protonresponse.h"
#include "getservicetemplaterequest.h"

namespace QtAws {
namespace Proton {

class GetServiceTemplateResponsePrivate;

class QTAWSPROTON_EXPORT GetServiceTemplateResponse : public ProtonResponse {
    Q_OBJECT

public:
    GetServiceTemplateResponse(const GetServiceTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetServiceTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceTemplateResponse)
    Q_DISABLE_COPY(GetServiceTemplateResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
