// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTNOTEBOOKEXECUTIONRESPONSE_H
#define QTAWS_STARTNOTEBOOKEXECUTIONRESPONSE_H

#include "emrresponse.h"
#include "startnotebookexecutionrequest.h"

namespace QtAws {
namespace Emr {

class StartNotebookExecutionResponsePrivate;

class QTAWSEMR_EXPORT StartNotebookExecutionResponse : public EmrResponse {
    Q_OBJECT

public:
    StartNotebookExecutionResponse(const StartNotebookExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartNotebookExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartNotebookExecutionResponse)
    Q_DISABLE_COPY(StartNotebookExecutionResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
