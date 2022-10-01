// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPERIMENTTEMPLATERESPONSE_H
#define QTAWS_GETEXPERIMENTTEMPLATERESPONSE_H

#include "fisresponse.h"
#include "getexperimenttemplaterequest.h"

namespace QtAws {
namespace Fis {

class GetExperimentTemplateResponsePrivate;

class QTAWSFIS_EXPORT GetExperimentTemplateResponse : public FisResponse {
    Q_OBJECT

public:
    GetExperimentTemplateResponse(const GetExperimentTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetExperimentTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExperimentTemplateResponse)
    Q_DISABLE_COPY(GetExperimentTemplateResponse)

};

} // namespace Fis
} // namespace QtAws

#endif
