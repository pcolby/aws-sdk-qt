// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETASKSETRESPONSE_H
#define QTAWS_CREATETASKSETRESPONSE_H

#include "ecsresponse.h"
#include "createtasksetrequest.h"

namespace QtAws {
namespace Ecs {

class CreateTaskSetResponsePrivate;

class QTAWSECS_EXPORT CreateTaskSetResponse : public EcsResponse {
    Q_OBJECT

public:
    CreateTaskSetResponse(const CreateTaskSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTaskSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTaskSetResponse)
    Q_DISABLE_COPY(CreateTaskSetResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
