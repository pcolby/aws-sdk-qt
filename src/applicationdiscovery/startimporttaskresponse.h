// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMPORTTASKRESPONSE_H
#define QTAWS_STARTIMPORTTASKRESPONSE_H

#include "applicationdiscoveryresponse.h"
#include "startimporttaskrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class StartImportTaskResponsePrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT StartImportTaskResponse : public ApplicationDiscoveryResponse {
    Q_OBJECT

public:
    StartImportTaskResponse(const StartImportTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartImportTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartImportTaskResponse)
    Q_DISABLE_COPY(StartImportTaskResponse)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
