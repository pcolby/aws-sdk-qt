// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLEETRESPONSE_P_H
#define QTAWS_CREATEFLEETRESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class CreateFleetResponse;

class CreateFleetResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit CreateFleetResponsePrivate(CreateFleetResponse * const q);

    void parseCreateFleetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFleetResponse)
    Q_DISABLE_COPY(CreateFleetResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif
