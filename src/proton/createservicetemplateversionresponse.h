// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICETEMPLATEVERSIONRESPONSE_H
#define QTAWS_CREATESERVICETEMPLATEVERSIONRESPONSE_H

#include "protonresponse.h"
#include "createservicetemplateversionrequest.h"

namespace QtAws {
namespace Proton {

class CreateServiceTemplateVersionResponsePrivate;

class QTAWSPROTON_EXPORT CreateServiceTemplateVersionResponse : public ProtonResponse {
    Q_OBJECT

public:
    CreateServiceTemplateVersionResponse(const CreateServiceTemplateVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateServiceTemplateVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateServiceTemplateVersionResponse)
    Q_DISABLE_COPY(CreateServiceTemplateVersionResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
