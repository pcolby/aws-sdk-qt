// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKEYGROUPRESPONSE_P_H
#define QTAWS_DELETEKEYGROUPRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class DeleteKeyGroupResponse;

class DeleteKeyGroupResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit DeleteKeyGroupResponsePrivate(DeleteKeyGroupResponse * const q);

    void parseDeleteKeyGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteKeyGroupResponse)
    Q_DISABLE_COPY(DeleteKeyGroupResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
