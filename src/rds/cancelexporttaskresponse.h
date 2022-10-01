// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELEXPORTTASKRESPONSE_H
#define QTAWS_CANCELEXPORTTASKRESPONSE_H

#include "rdsresponse.h"
#include "cancelexporttaskrequest.h"

namespace QtAws {
namespace Rds {

class CancelExportTaskResponsePrivate;

class QTAWSRDS_EXPORT CancelExportTaskResponse : public RdsResponse {
    Q_OBJECT

public:
    CancelExportTaskResponse(const CancelExportTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelExportTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelExportTaskResponse)
    Q_DISABLE_COPY(CancelExportTaskResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
