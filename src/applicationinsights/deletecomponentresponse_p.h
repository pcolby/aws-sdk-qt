// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMPONENTRESPONSE_P_H
#define QTAWS_DELETECOMPONENTRESPONSE_P_H

#include "applicationinsightsresponse_p.h"

namespace QtAws {
namespace ApplicationInsights {

class DeleteComponentResponse;

class DeleteComponentResponsePrivate : public ApplicationInsightsResponsePrivate {

public:

    explicit DeleteComponentResponsePrivate(DeleteComponentResponse * const q);

    void parseDeleteComponentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteComponentResponse)
    Q_DISABLE_COPY(DeleteComponentResponsePrivate)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
