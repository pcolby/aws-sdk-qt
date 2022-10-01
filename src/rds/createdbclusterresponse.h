// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERRESPONSE_H
#define QTAWS_CREATEDBCLUSTERRESPONSE_H

#include "rdsresponse.h"
#include "createdbclusterrequest.h"

namespace QtAws {
namespace Rds {

class CreateDBClusterResponsePrivate;

class QTAWSRDS_EXPORT CreateDBClusterResponse : public RdsResponse {
    Q_OBJECT

public:
    CreateDBClusterResponse(const CreateDBClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDBClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBClusterResponse)
    Q_DISABLE_COPY(CreateDBClusterResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
