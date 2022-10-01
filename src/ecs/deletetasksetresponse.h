// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETASKSETRESPONSE_H
#define QTAWS_DELETETASKSETRESPONSE_H

#include "ecsresponse.h"
#include "deletetasksetrequest.h"

namespace QtAws {
namespace Ecs {

class DeleteTaskSetResponsePrivate;

class QTAWSECS_EXPORT DeleteTaskSetResponse : public EcsResponse {
    Q_OBJECT

public:
    DeleteTaskSetResponse(const DeleteTaskSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTaskSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTaskSetResponse)
    Q_DISABLE_COPY(DeleteTaskSetResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
