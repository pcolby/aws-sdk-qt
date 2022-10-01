// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTTEMPLATEVERSIONRESPONSE_H
#define QTAWS_GETENVIRONMENTTEMPLATEVERSIONRESPONSE_H

#include "protonresponse.h"
#include "getenvironmenttemplateversionrequest.h"

namespace QtAws {
namespace Proton {

class GetEnvironmentTemplateVersionResponsePrivate;

class QTAWSPROTON_EXPORT GetEnvironmentTemplateVersionResponse : public ProtonResponse {
    Q_OBJECT

public:
    GetEnvironmentTemplateVersionResponse(const GetEnvironmentTemplateVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEnvironmentTemplateVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEnvironmentTemplateVersionResponse)
    Q_DISABLE_COPY(GetEnvironmentTemplateVersionResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
