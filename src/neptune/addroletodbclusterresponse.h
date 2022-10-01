// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDROLETODBCLUSTERRESPONSE_H
#define QTAWS_ADDROLETODBCLUSTERRESPONSE_H

#include "neptuneresponse.h"
#include "addroletodbclusterrequest.h"

namespace QtAws {
namespace Neptune {

class AddRoleToDBClusterResponsePrivate;

class QTAWSNEPTUNE_EXPORT AddRoleToDBClusterResponse : public NeptuneResponse {
    Q_OBJECT

public:
    AddRoleToDBClusterResponse(const AddRoleToDBClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddRoleToDBClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddRoleToDBClusterResponse)
    Q_DISABLE_COPY(AddRoleToDBClusterResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
