// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARAMETERGROUPRESPONSE_P_H
#define QTAWS_UPDATEPARAMETERGROUPRESPONSE_P_H

#include "daxresponse_p.h"

namespace QtAws {
namespace Dax {

class UpdateParameterGroupResponse;

class UpdateParameterGroupResponsePrivate : public DaxResponsePrivate {

public:

    explicit UpdateParameterGroupResponsePrivate(UpdateParameterGroupResponse * const q);

    void parseUpdateParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateParameterGroupResponse)
    Q_DISABLE_COPY(UpdateParameterGroupResponsePrivate)

};

} // namespace Dax
} // namespace QtAws

#endif
