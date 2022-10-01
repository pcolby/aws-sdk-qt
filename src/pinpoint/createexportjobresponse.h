// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPORTJOBRESPONSE_H
#define QTAWS_CREATEEXPORTJOBRESPONSE_H

#include "pinpointresponse.h"
#include "createexportjobrequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateExportJobResponsePrivate;

class QTAWSPINPOINT_EXPORT CreateExportJobResponse : public PinpointResponse {
    Q_OBJECT

public:
    CreateExportJobResponse(const CreateExportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateExportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExportJobResponse)
    Q_DISABLE_COPY(CreateExportJobResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
