// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTASKRESPONSE_H
#define QTAWS_STOPTASKRESPONSE_H

#include "ecsresponse.h"
#include "stoptaskrequest.h"

namespace QtAws {
namespace Ecs {

class StopTaskResponsePrivate;

class QTAWSECS_EXPORT StopTaskResponse : public EcsResponse {
    Q_OBJECT

public:
    StopTaskResponse(const StopTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopTaskResponse)
    Q_DISABLE_COPY(StopTaskResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
