// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTTEMPLATEVERSIONRESPONSE_H
#define QTAWS_DELETEENVIRONMENTTEMPLATEVERSIONRESPONSE_H

#include "protonresponse.h"
#include "deleteenvironmenttemplateversionrequest.h"

namespace QtAws {
namespace Proton {

class DeleteEnvironmentTemplateVersionResponsePrivate;

class QTAWSPROTON_EXPORT DeleteEnvironmentTemplateVersionResponse : public ProtonResponse {
    Q_OBJECT

public:
    DeleteEnvironmentTemplateVersionResponse(const DeleteEnvironmentTemplateVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEnvironmentTemplateVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEnvironmentTemplateVersionResponse)
    Q_DISABLE_COPY(DeleteEnvironmentTemplateVersionResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
