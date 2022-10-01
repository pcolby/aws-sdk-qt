// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEXPORTTASKRESPONSE_H
#define QTAWS_STARTEXPORTTASKRESPONSE_H

#include "applicationdiscoveryresponse.h"
#include "startexporttaskrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class StartExportTaskResponsePrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT StartExportTaskResponse : public ApplicationDiscoveryResponse {
    Q_OBJECT

public:
    StartExportTaskResponse(const StartExportTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartExportTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartExportTaskResponse)
    Q_DISABLE_COPY(StartExportTaskResponse)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
