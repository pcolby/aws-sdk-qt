// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNTASKRESPONSE_H
#define QTAWS_RUNTASKRESPONSE_H

#include "ecsresponse.h"
#include "runtaskrequest.h"

namespace QtAws {
namespace Ecs {

class RunTaskResponsePrivate;

class QTAWSECS_EXPORT RunTaskResponse : public EcsResponse {
    Q_OBJECT

public:
    RunTaskResponse(const RunTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RunTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RunTaskResponse)
    Q_DISABLE_COPY(RunTaskResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
