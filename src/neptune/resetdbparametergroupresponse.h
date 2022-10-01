// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETDBPARAMETERGROUPRESPONSE_H
#define QTAWS_RESETDBPARAMETERGROUPRESPONSE_H

#include "neptuneresponse.h"
#include "resetdbparametergrouprequest.h"

namespace QtAws {
namespace Neptune {

class ResetDBParameterGroupResponsePrivate;

class QTAWSNEPTUNE_EXPORT ResetDBParameterGroupResponse : public NeptuneResponse {
    Q_OBJECT

public:
    ResetDBParameterGroupResponse(const ResetDBParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResetDBParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetDBParameterGroupResponse)
    Q_DISABLE_COPY(ResetDBParameterGroupResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
