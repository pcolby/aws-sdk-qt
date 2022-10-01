// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERPARAMETERGROUPRESPONSE_H
#define QTAWS_MODIFYDBCLUSTERPARAMETERGROUPRESPONSE_H

#include "neptuneresponse.h"
#include "modifydbclusterparametergrouprequest.h"

namespace QtAws {
namespace Neptune {

class ModifyDBClusterParameterGroupResponsePrivate;

class QTAWSNEPTUNE_EXPORT ModifyDBClusterParameterGroupResponse : public NeptuneResponse {
    Q_OBJECT

public:
    ModifyDBClusterParameterGroupResponse(const ModifyDBClusterParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyDBClusterParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBClusterParameterGroupResponse)
    Q_DISABLE_COPY(ModifyDBClusterParameterGroupResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
