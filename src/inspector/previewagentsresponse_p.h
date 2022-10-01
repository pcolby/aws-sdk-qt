// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PREVIEWAGENTSRESPONSE_P_H
#define QTAWS_PREVIEWAGENTSRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class PreviewAgentsResponse;

class PreviewAgentsResponsePrivate : public InspectorResponsePrivate {

public:

    explicit PreviewAgentsResponsePrivate(PreviewAgentsResponse * const q);

    void parsePreviewAgentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PreviewAgentsResponse)
    Q_DISABLE_COPY(PreviewAgentsResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
