// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGLOBALCLUSTERRESPONSE_H
#define QTAWS_CREATEGLOBALCLUSTERRESPONSE_H

#include "rdsresponse.h"
#include "createglobalclusterrequest.h"

namespace QtAws {
namespace Rds {

class CreateGlobalClusterResponsePrivate;

class QTAWSRDS_EXPORT CreateGlobalClusterResponse : public RdsResponse {
    Q_OBJECT

public:
    CreateGlobalClusterResponse(const CreateGlobalClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGlobalClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGlobalClusterResponse)
    Q_DISABLE_COPY(CreateGlobalClusterResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
