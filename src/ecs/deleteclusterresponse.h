// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERRESPONSE_H
#define QTAWS_DELETECLUSTERRESPONSE_H

#include "ecsresponse.h"
#include "deleteclusterrequest.h"

namespace QtAws {
namespace Ecs {

class DeleteClusterResponsePrivate;

class QTAWSECS_EXPORT DeleteClusterResponse : public EcsResponse {
    Q_OBJECT

public:
    DeleteClusterResponse(const DeleteClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClusterResponse)
    Q_DISABLE_COPY(DeleteClusterResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
