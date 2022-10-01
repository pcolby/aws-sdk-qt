// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTTEMPLATEVERSIONRESPONSE_H
#define QTAWS_UPDATEENVIRONMENTTEMPLATEVERSIONRESPONSE_H

#include "protonresponse.h"
#include "updateenvironmenttemplateversionrequest.h"

namespace QtAws {
namespace Proton {

class UpdateEnvironmentTemplateVersionResponsePrivate;

class QTAWSPROTON_EXPORT UpdateEnvironmentTemplateVersionResponse : public ProtonResponse {
    Q_OBJECT

public:
    UpdateEnvironmentTemplateVersionResponse(const UpdateEnvironmentTemplateVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEnvironmentTemplateVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEnvironmentTemplateVersionResponse)
    Q_DISABLE_COPY(UpdateEnvironmentTemplateVersionResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
