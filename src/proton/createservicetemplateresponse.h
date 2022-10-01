// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICETEMPLATERESPONSE_H
#define QTAWS_CREATESERVICETEMPLATERESPONSE_H

#include "protonresponse.h"
#include "createservicetemplaterequest.h"

namespace QtAws {
namespace Proton {

class CreateServiceTemplateResponsePrivate;

class QTAWSPROTON_EXPORT CreateServiceTemplateResponse : public ProtonResponse {
    Q_OBJECT

public:
    CreateServiceTemplateResponse(const CreateServiceTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateServiceTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateServiceTemplateResponse)
    Q_DISABLE_COPY(CreateServiceTemplateResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
