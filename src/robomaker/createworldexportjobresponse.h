// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORLDEXPORTJOBRESPONSE_H
#define QTAWS_CREATEWORLDEXPORTJOBRESPONSE_H

#include "robomakerresponse.h"
#include "createworldexportjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateWorldExportJobResponsePrivate;

class QTAWSROBOMAKER_EXPORT CreateWorldExportJobResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    CreateWorldExportJobResponse(const CreateWorldExportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWorldExportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorldExportJobResponse)
    Q_DISABLE_COPY(CreateWorldExportJobResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
