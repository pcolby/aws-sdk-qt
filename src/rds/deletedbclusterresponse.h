// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBCLUSTERRESPONSE_H
#define QTAWS_DELETEDBCLUSTERRESPONSE_H

#include "rdsresponse.h"
#include "deletedbclusterrequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBClusterResponsePrivate;

class QTAWSRDS_EXPORT DeleteDBClusterResponse : public RdsResponse {
    Q_OBJECT

public:
    DeleteDBClusterResponse(const DeleteDBClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDBClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBClusterResponse)
    Q_DISABLE_COPY(DeleteDBClusterResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
