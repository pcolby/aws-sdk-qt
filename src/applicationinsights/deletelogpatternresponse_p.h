// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGPATTERNRESPONSE_P_H
#define QTAWS_DELETELOGPATTERNRESPONSE_P_H

#include "applicationinsightsresponse_p.h"

namespace QtAws {
namespace ApplicationInsights {

class DeleteLogPatternResponse;

class DeleteLogPatternResponsePrivate : public ApplicationInsightsResponsePrivate {

public:

    explicit DeleteLogPatternResponsePrivate(DeleteLogPatternResponse * const q);

    void parseDeleteLogPatternResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLogPatternResponse)
    Q_DISABLE_COPY(DeleteLogPatternResponsePrivate)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
