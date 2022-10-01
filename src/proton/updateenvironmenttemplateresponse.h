// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTTEMPLATERESPONSE_H
#define QTAWS_UPDATEENVIRONMENTTEMPLATERESPONSE_H

#include "protonresponse.h"
#include "updateenvironmenttemplaterequest.h"

namespace QtAws {
namespace Proton {

class UpdateEnvironmentTemplateResponsePrivate;

class QTAWSPROTON_EXPORT UpdateEnvironmentTemplateResponse : public ProtonResponse {
    Q_OBJECT

public:
    UpdateEnvironmentTemplateResponse(const UpdateEnvironmentTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEnvironmentTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEnvironmentTemplateResponse)
    Q_DISABLE_COPY(UpdateEnvironmentTemplateResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
