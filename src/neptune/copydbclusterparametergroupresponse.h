// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYDBCLUSTERPARAMETERGROUPRESPONSE_H
#define QTAWS_COPYDBCLUSTERPARAMETERGROUPRESPONSE_H

#include "neptuneresponse.h"
#include "copydbclusterparametergrouprequest.h"

namespace QtAws {
namespace Neptune {

class CopyDBClusterParameterGroupResponsePrivate;

class QTAWSNEPTUNE_EXPORT CopyDBClusterParameterGroupResponse : public NeptuneResponse {
    Q_OBJECT

public:
    CopyDBClusterParameterGroupResponse(const CopyDBClusterParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CopyDBClusterParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyDBClusterParameterGroupResponse)
    Q_DISABLE_COPY(CopyDBClusterParameterGroupResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
