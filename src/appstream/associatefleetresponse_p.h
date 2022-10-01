// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEFLEETRESPONSE_P_H
#define QTAWS_ASSOCIATEFLEETRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class AssociateFleetResponse;

class AssociateFleetResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit AssociateFleetResponsePrivate(AssociateFleetResponse * const q);

    void parseAssociateFleetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateFleetResponse)
    Q_DISABLE_COPY(AssociateFleetResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
