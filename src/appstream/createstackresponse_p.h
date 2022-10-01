// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTACKRESPONSE_P_H
#define QTAWS_CREATESTACKRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class CreateStackResponse;

class CreateStackResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit CreateStackResponsePrivate(CreateStackResponse * const q);

    void parseCreateStackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStackResponse)
    Q_DISABLE_COPY(CreateStackResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
