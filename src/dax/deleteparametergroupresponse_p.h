// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARAMETERGROUPRESPONSE_P_H
#define QTAWS_DELETEPARAMETERGROUPRESPONSE_P_H

#include "daxresponse_p.h"

namespace QtAws {
namespace Dax {

class DeleteParameterGroupResponse;

class DeleteParameterGroupResponsePrivate : public DaxResponsePrivate {

public:

    explicit DeleteParameterGroupResponsePrivate(DeleteParameterGroupResponse * const q);

    void parseDeleteParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteParameterGroupResponse)
    Q_DISABLE_COPY(DeleteParameterGroupResponsePrivate)

};

} // namespace Dax
} // namespace QtAws

#endif
