// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMINGSESSIONRESPONSE_P_H
#define QTAWS_DELETESTREAMINGSESSIONRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class DeleteStreamingSessionResponse;

class DeleteStreamingSessionResponsePrivate : public NimbleResponsePrivate {

public:

    explicit DeleteStreamingSessionResponsePrivate(DeleteStreamingSessionResponse * const q);

    void parseDeleteStreamingSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStreamingSessionResponse)
    Q_DISABLE_COPY(DeleteStreamingSessionResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
