// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAPPLICATIONFLEETRESPONSE_P_H
#define QTAWS_ASSOCIATEAPPLICATIONFLEETRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class AssociateApplicationFleetResponse;

class AssociateApplicationFleetResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit AssociateApplicationFleetResponsePrivate(AssociateApplicationFleetResponse * const q);

    void parseAssociateApplicationFleetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateApplicationFleetResponse)
    Q_DISABLE_COPY(AssociateApplicationFleetResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
