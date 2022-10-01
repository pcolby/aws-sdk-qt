// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTTEMPLATERESPONSE_H
#define QTAWS_GETENVIRONMENTTEMPLATERESPONSE_H

#include "protonresponse.h"
#include "getenvironmenttemplaterequest.h"

namespace QtAws {
namespace Proton {

class GetEnvironmentTemplateResponsePrivate;

class QTAWSPROTON_EXPORT GetEnvironmentTemplateResponse : public ProtonResponse {
    Q_OBJECT

public:
    GetEnvironmentTemplateResponse(const GetEnvironmentTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEnvironmentTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEnvironmentTemplateResponse)
    Q_DISABLE_COPY(GetEnvironmentTemplateResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
