// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETEXPORTJOBRESPONSE_H
#define QTAWS_CREATEDATASETEXPORTJOBRESPONSE_H

#include "personalizeresponse.h"
#include "createdatasetexportjobrequest.h"

namespace QtAws {
namespace Personalize {

class CreateDatasetExportJobResponsePrivate;

class QTAWSPERSONALIZE_EXPORT CreateDatasetExportJobResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    CreateDatasetExportJobResponse(const CreateDatasetExportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDatasetExportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDatasetExportJobResponse)
    Q_DISABLE_COPY(CreateDatasetExportJobResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
