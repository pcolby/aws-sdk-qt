// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICETEMPLATERESPONSE_H
#define QTAWS_UPDATESERVICETEMPLATERESPONSE_H

#include "protonresponse.h"
#include "updateservicetemplaterequest.h"

namespace QtAws {
namespace Proton {

class UpdateServiceTemplateResponsePrivate;

class QTAWSPROTON_EXPORT UpdateServiceTemplateResponse : public ProtonResponse {
    Q_OBJECT

public:
    UpdateServiceTemplateResponse(const UpdateServiceTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateServiceTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServiceTemplateResponse)
    Q_DISABLE_COPY(UpdateServiceTemplateResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
