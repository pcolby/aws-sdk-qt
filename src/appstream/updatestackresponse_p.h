// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTACKRESPONSE_P_H
#define QTAWS_UPDATESTACKRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class UpdateStackResponse;

class UpdateStackResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit UpdateStackResponsePrivate(UpdateStackResponse * const q);

    void parseUpdateStackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateStackResponse)
    Q_DISABLE_COPY(UpdateStackResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
