// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICETEMPLATEVERSIONRESPONSE_H
#define QTAWS_DELETESERVICETEMPLATEVERSIONRESPONSE_H

#include "protonresponse.h"
#include "deleteservicetemplateversionrequest.h"

namespace QtAws {
namespace Proton {

class DeleteServiceTemplateVersionResponsePrivate;

class QTAWSPROTON_EXPORT DeleteServiceTemplateVersionResponse : public ProtonResponse {
    Q_OBJECT

public:
    DeleteServiceTemplateVersionResponse(const DeleteServiceTemplateVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteServiceTemplateVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServiceTemplateVersionResponse)
    Q_DISABLE_COPY(DeleteServiceTemplateVersionResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
