// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETRESPONSE_P_H
#define QTAWS_DELETEFLEETRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class DeleteFleetResponse;

class DeleteFleetResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit DeleteFleetResponsePrivate(DeleteFleetResponse * const q);

    void parseDeleteFleetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFleetResponse)
    Q_DISABLE_COPY(DeleteFleetResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
