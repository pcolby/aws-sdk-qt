// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERPARAMETERGROUPRESPONSE_H
#define QTAWS_CREATEDBCLUSTERPARAMETERGROUPRESPONSE_H

#include "neptuneresponse.h"
#include "createdbclusterparametergrouprequest.h"

namespace QtAws {
namespace Neptune {

class CreateDBClusterParameterGroupResponsePrivate;

class QTAWSNEPTUNE_EXPORT CreateDBClusterParameterGroupResponse : public NeptuneResponse {
    Q_OBJECT

public:
    CreateDBClusterParameterGroupResponse(const CreateDBClusterParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDBClusterParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBClusterParameterGroupResponse)
    Q_DISABLE_COPY(CreateDBClusterParameterGroupResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
