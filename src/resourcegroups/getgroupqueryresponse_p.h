// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPQUERYRESPONSE_P_H
#define QTAWS_GETGROUPQUERYRESPONSE_P_H

#include "resourcegroupsresponse_p.h"

namespace QtAws {
namespace ResourceGroups {

class GetGroupQueryResponse;

class GetGroupQueryResponsePrivate : public ResourceGroupsResponsePrivate {

public:

    explicit GetGroupQueryResponsePrivate(GetGroupQueryResponse * const q);

    void parseGetGroupQueryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGroupQueryResponse)
    Q_DISABLE_COPY(GetGroupQueryResponsePrivate)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
