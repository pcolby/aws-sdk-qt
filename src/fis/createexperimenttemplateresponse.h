// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPERIMENTTEMPLATERESPONSE_H
#define QTAWS_CREATEEXPERIMENTTEMPLATERESPONSE_H

#include "fisresponse.h"
#include "createexperimenttemplaterequest.h"

namespace QtAws {
namespace Fis {

class CreateExperimentTemplateResponsePrivate;

class QTAWSFIS_EXPORT CreateExperimentTemplateResponse : public FisResponse {
    Q_OBJECT

public:
    CreateExperimentTemplateResponse(const CreateExperimentTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateExperimentTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExperimentTemplateResponse)
    Q_DISABLE_COPY(CreateExperimentTemplateResponse)

};

} // namespace Fis
} // namespace QtAws

#endif
