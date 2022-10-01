// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTAGSFORRESOURCERESPONSE_P_H
#define QTAWS_SETTAGSFORRESOURCERESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class SetTagsForResourceResponse;

class SetTagsForResourceResponsePrivate : public InspectorResponsePrivate {

public:

    explicit SetTagsForResourceResponsePrivate(SetTagsForResourceResponse * const q);

    void parseSetTagsForResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetTagsForResourceResponse)
    Q_DISABLE_COPY(SetTagsForResourceResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
