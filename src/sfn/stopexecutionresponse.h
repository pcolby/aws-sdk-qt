// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPEXECUTIONRESPONSE_H
#define QTAWS_STOPEXECUTIONRESPONSE_H

#include "sfnresponse.h"
#include "stopexecutionrequest.h"

namespace QtAws {
namespace Sfn {

class StopExecutionResponsePrivate;

class QTAWSSFN_EXPORT StopExecutionResponse : public SfnResponse {
    Q_OBJECT

public:
    StopExecutionResponse(const StopExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopExecutionResponse)
    Q_DISABLE_COPY(StopExecutionResponse)

};

} // namespace Sfn
} // namespace QtAws

#endif
