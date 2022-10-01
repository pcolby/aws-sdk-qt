// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETASKSETRESPONSE_H
#define QTAWS_UPDATETASKSETRESPONSE_H

#include "ecsresponse.h"
#include "updatetasksetrequest.h"

namespace QtAws {
namespace Ecs {

class UpdateTaskSetResponsePrivate;

class QTAWSECS_EXPORT UpdateTaskSetResponse : public EcsResponse {
    Q_OBJECT

public:
    UpdateTaskSetResponse(const UpdateTaskSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTaskSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTaskSetResponse)
    Q_DISABLE_COPY(UpdateTaskSetResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
