// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGROUPQUERYRESPONSE_P_H
#define QTAWS_UPDATEGROUPQUERYRESPONSE_P_H

#include "resourcegroupsresponse_p.h"

namespace QtAws {
namespace ResourceGroups {

class UpdateGroupQueryResponse;

class UpdateGroupQueryResponsePrivate : public ResourceGroupsResponsePrivate {

public:

    explicit UpdateGroupQueryResponsePrivate(UpdateGroupQueryResponse * const q);

    void parseUpdateGroupQueryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGroupQueryResponse)
    Q_DISABLE_COPY(UpdateGroupQueryResponsePrivate)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
