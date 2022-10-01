// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTTEMPLATEVERSIONRESPONSE_H
#define QTAWS_CREATEENVIRONMENTTEMPLATEVERSIONRESPONSE_H

#include "protonresponse.h"
#include "createenvironmenttemplateversionrequest.h"

namespace QtAws {
namespace Proton {

class CreateEnvironmentTemplateVersionResponsePrivate;

class QTAWSPROTON_EXPORT CreateEnvironmentTemplateVersionResponse : public ProtonResponse {
    Q_OBJECT

public:
    CreateEnvironmentTemplateVersionResponse(const CreateEnvironmentTemplateVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEnvironmentTemplateVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEnvironmentTemplateVersionResponse)
    Q_DISABLE_COPY(CreateEnvironmentTemplateVersionResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
