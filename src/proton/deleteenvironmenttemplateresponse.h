// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTTEMPLATERESPONSE_H
#define QTAWS_DELETEENVIRONMENTTEMPLATERESPONSE_H

#include "protonresponse.h"
#include "deleteenvironmenttemplaterequest.h"

namespace QtAws {
namespace Proton {

class DeleteEnvironmentTemplateResponsePrivate;

class QTAWSPROTON_EXPORT DeleteEnvironmentTemplateResponse : public ProtonResponse {
    Q_OBJECT

public:
    DeleteEnvironmentTemplateResponse(const DeleteEnvironmentTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEnvironmentTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEnvironmentTemplateResponse)
    Q_DISABLE_COPY(DeleteEnvironmentTemplateResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
