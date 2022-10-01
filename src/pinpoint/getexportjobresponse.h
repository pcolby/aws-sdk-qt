// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPORTJOBRESPONSE_H
#define QTAWS_GETEXPORTJOBRESPONSE_H

#include "pinpointresponse.h"
#include "getexportjobrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetExportJobResponsePrivate;

class QTAWSPINPOINT_EXPORT GetExportJobResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetExportJobResponse(const GetExportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetExportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExportJobResponse)
    Q_DISABLE_COPY(GetExportJobResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
