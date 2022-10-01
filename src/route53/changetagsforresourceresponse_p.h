// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGETAGSFORRESOURCERESPONSE_P_H
#define QTAWS_CHANGETAGSFORRESOURCERESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class ChangeTagsForResourceResponse;

class ChangeTagsForResourceResponsePrivate : public Route53ResponsePrivate {

public:

    explicit ChangeTagsForResourceResponsePrivate(ChangeTagsForResourceResponse * const q);

    void parseChangeTagsForResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ChangeTagsForResourceResponse)
    Q_DISABLE_COPY(ChangeTagsForResourceResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
