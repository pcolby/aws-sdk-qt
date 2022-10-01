// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICETEMPLATEVERSIONRESPONSE_H
#define QTAWS_UPDATESERVICETEMPLATEVERSIONRESPONSE_H

#include "protonresponse.h"
#include "updateservicetemplateversionrequest.h"

namespace QtAws {
namespace Proton {

class UpdateServiceTemplateVersionResponsePrivate;

class QTAWSPROTON_EXPORT UpdateServiceTemplateVersionResponse : public ProtonResponse {
    Q_OBJECT

public:
    UpdateServiceTemplateVersionResponse(const UpdateServiceTemplateVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateServiceTemplateVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServiceTemplateVersionResponse)
    Q_DISABLE_COPY(UpdateServiceTemplateVersionResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
