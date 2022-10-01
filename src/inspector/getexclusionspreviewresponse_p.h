// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXCLUSIONSPREVIEWRESPONSE_P_H
#define QTAWS_GETEXCLUSIONSPREVIEWRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class GetExclusionsPreviewResponse;

class GetExclusionsPreviewResponsePrivate : public InspectorResponsePrivate {

public:

    explicit GetExclusionsPreviewResponsePrivate(GetExclusionsPreviewResponse * const q);

    void parseGetExclusionsPreviewResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetExclusionsPreviewResponse)
    Q_DISABLE_COPY(GetExclusionsPreviewResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
