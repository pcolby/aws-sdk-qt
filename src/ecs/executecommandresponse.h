// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTECOMMANDRESPONSE_H
#define QTAWS_EXECUTECOMMANDRESPONSE_H

#include "ecsresponse.h"
#include "executecommandrequest.h"

namespace QtAws {
namespace Ecs {

class ExecuteCommandResponsePrivate;

class QTAWSECS_EXPORT ExecuteCommandResponse : public EcsResponse {
    Q_OBJECT

public:
    ExecuteCommandResponse(const ExecuteCommandRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExecuteCommandRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExecuteCommandResponse)
    Q_DISABLE_COPY(ExecuteCommandResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
