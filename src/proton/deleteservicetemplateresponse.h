// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICETEMPLATERESPONSE_H
#define QTAWS_DELETESERVICETEMPLATERESPONSE_H

#include "protonresponse.h"
#include "deleteservicetemplaterequest.h"

namespace QtAws {
namespace Proton {

class DeleteServiceTemplateResponsePrivate;

class QTAWSPROTON_EXPORT DeleteServiceTemplateResponse : public ProtonResponse {
    Q_OBJECT

public:
    DeleteServiceTemplateResponse(const DeleteServiceTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteServiceTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServiceTemplateResponse)
    Q_DISABLE_COPY(DeleteServiceTemplateResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
