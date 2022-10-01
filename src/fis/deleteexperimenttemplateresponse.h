// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPERIMENTTEMPLATERESPONSE_H
#define QTAWS_DELETEEXPERIMENTTEMPLATERESPONSE_H

#include "fisresponse.h"
#include "deleteexperimenttemplaterequest.h"

namespace QtAws {
namespace Fis {

class DeleteExperimentTemplateResponsePrivate;

class QTAWSFIS_EXPORT DeleteExperimentTemplateResponse : public FisResponse {
    Q_OBJECT

public:
    DeleteExperimentTemplateResponse(const DeleteExperimentTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteExperimentTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteExperimentTemplateResponse)
    Q_DISABLE_COPY(DeleteExperimentTemplateResponse)

};

} // namespace Fis
} // namespace QtAws

#endif
