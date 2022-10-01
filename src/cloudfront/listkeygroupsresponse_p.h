// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYGROUPSRESPONSE_P_H
#define QTAWS_LISTKEYGROUPSRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class ListKeyGroupsResponse;

class ListKeyGroupsResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit ListKeyGroupsResponsePrivate(ListKeyGroupsResponse * const q);

    void parseListKeyGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListKeyGroupsResponse)
    Q_DISABLE_COPY(ListKeyGroupsResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
