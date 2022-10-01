// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORLDGENERATIONJOBRESPONSE_H
#define QTAWS_CREATEWORLDGENERATIONJOBRESPONSE_H

#include "robomakerresponse.h"
#include "createworldgenerationjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateWorldGenerationJobResponsePrivate;

class QTAWSROBOMAKER_EXPORT CreateWorldGenerationJobResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    CreateWorldGenerationJobResponse(const CreateWorldGenerationJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWorldGenerationJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorldGenerationJobResponse)
    Q_DISABLE_COPY(CreateWorldGenerationJobResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
