// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXCLUSIONSPREVIEWRESPONSE_P_H
#define QTAWS_CREATEEXCLUSIONSPREVIEWRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class CreateExclusionsPreviewResponse;

class CreateExclusionsPreviewResponsePrivate : public InspectorResponsePrivate {

public:

    explicit CreateExclusionsPreviewResponsePrivate(CreateExclusionsPreviewResponse * const q);

    void parseCreateExclusionsPreviewResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateExclusionsPreviewResponse)
    Q_DISABLE_COPY(CreateExclusionsPreviewResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
