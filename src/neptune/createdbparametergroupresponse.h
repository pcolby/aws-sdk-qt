// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBPARAMETERGROUPRESPONSE_H
#define QTAWS_CREATEDBPARAMETERGROUPRESPONSE_H

#include "neptuneresponse.h"
#include "createdbparametergrouprequest.h"

namespace QtAws {
namespace Neptune {

class CreateDBParameterGroupResponsePrivate;

class QTAWSNEPTUNE_EXPORT CreateDBParameterGroupResponse : public NeptuneResponse {
    Q_OBJECT

public:
    CreateDBParameterGroupResponse(const CreateDBParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDBParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBParameterGroupResponse)
    Q_DISABLE_COPY(CreateDBParameterGroupResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
