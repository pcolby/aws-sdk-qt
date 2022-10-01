// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORRESOURCERESPONSE_P_H
#define QTAWS_LISTTAGSFORRESOURCERESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class ListTagsForResourceResponse;

class ListTagsForResourceResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit ListTagsForResourceResponsePrivate(ListTagsForResourceResponse * const q);

    void parseListTagsForResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTagsForResourceResponse)
    Q_DISABLE_COPY(ListTagsForResourceResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
