// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTRESPONSE_P_H
#define QTAWS_DELETEENDPOINTRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DeleteEndpointResponse;

class DeleteEndpointResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DeleteEndpointResponsePrivate(DeleteEndpointResponse * const q);

    void parseDeleteEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEndpointResponse)
    Q_DISABLE_COPY(DeleteEndpointResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
