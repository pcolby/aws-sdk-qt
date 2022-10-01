// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPNOTEBOOKEXECUTIONRESPONSE_H
#define QTAWS_STOPNOTEBOOKEXECUTIONRESPONSE_H

#include "emrresponse.h"
#include "stopnotebookexecutionrequest.h"

namespace QtAws {
namespace Emr {

class StopNotebookExecutionResponsePrivate;

class QTAWSEMR_EXPORT StopNotebookExecutionResponse : public EmrResponse {
    Q_OBJECT

public:
    StopNotebookExecutionResponse(const StopNotebookExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopNotebookExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopNotebookExecutionResponse)
    Q_DISABLE_COPY(StopNotebookExecutionResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
