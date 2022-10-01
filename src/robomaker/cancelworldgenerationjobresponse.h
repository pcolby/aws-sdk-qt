// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELWORLDGENERATIONJOBRESPONSE_H
#define QTAWS_CANCELWORLDGENERATIONJOBRESPONSE_H

#include "robomakerresponse.h"
#include "cancelworldgenerationjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class CancelWorldGenerationJobResponsePrivate;

class QTAWSROBOMAKER_EXPORT CancelWorldGenerationJobResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    CancelWorldGenerationJobResponse(const CancelWorldGenerationJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelWorldGenerationJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelWorldGenerationJobResponse)
    Q_DISABLE_COPY(CancelWorldGenerationJobResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
