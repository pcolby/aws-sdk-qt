// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXPERIMENTTEMPLATERESPONSE_H
#define QTAWS_UPDATEEXPERIMENTTEMPLATERESPONSE_H

#include "fisresponse.h"
#include "updateexperimenttemplaterequest.h"

namespace QtAws {
namespace Fis {

class UpdateExperimentTemplateResponsePrivate;

class QTAWSFIS_EXPORT UpdateExperimentTemplateResponse : public FisResponse {
    Q_OBJECT

public:
    UpdateExperimentTemplateResponse(const UpdateExperimentTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateExperimentTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateExperimentTemplateResponse)
    Q_DISABLE_COPY(UpdateExperimentTemplateResponse)

};

} // namespace Fis
} // namespace QtAws

#endif
