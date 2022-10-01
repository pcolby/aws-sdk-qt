// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELWORLDEXPORTJOBRESPONSE_H
#define QTAWS_CANCELWORLDEXPORTJOBRESPONSE_H

#include "robomakerresponse.h"
#include "cancelworldexportjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class CancelWorldExportJobResponsePrivate;

class QTAWSROBOMAKER_EXPORT CancelWorldExportJobResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    CancelWorldExportJobResponse(const CancelWorldExportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelWorldExportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelWorldExportJobResponse)
    Q_DISABLE_COPY(CancelWorldExportJobResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
