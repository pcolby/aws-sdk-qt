// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPERIMENTSRESPONSE_P_H
#define QTAWS_LISTEXPERIMENTSRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class ListExperimentsResponse;

class ListExperimentsResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit ListExperimentsResponsePrivate(ListExperimentsResponse * const q);

    void parseListExperimentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListExperimentsResponse)
    Q_DISABLE_COPY(ListExperimentsResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
