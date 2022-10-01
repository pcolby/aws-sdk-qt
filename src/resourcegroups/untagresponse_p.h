// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGRESPONSE_P_H
#define QTAWS_UNTAGRESPONSE_P_H

#include "resourcegroupsresponse_p.h"

namespace QtAws {
namespace ResourceGroups {

class UntagResponse;

class UntagResponsePrivate : public ResourceGroupsResponsePrivate {

public:

    explicit UntagResponsePrivate(UntagResponse * const q);

    void parseUntagResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UntagResponse)
    Q_DISABLE_COPY(UntagResponsePrivate)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
