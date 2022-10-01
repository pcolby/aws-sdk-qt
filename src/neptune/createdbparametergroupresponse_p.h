// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBPARAMETERGROUPRESPONSE_P_H
#define QTAWS_CREATEDBPARAMETERGROUPRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class CreateDBParameterGroupResponse;

class CreateDBParameterGroupResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit CreateDBParameterGroupResponsePrivate(CreateDBParameterGroupResponse * const q);

    void parseCreateDBParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDBParameterGroupResponse)
    Q_DISABLE_COPY(CreateDBParameterGroupResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
