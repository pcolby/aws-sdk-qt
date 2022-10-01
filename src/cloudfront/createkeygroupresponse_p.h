// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYGROUPRESPONSE_P_H
#define QTAWS_CREATEKEYGROUPRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class CreateKeyGroupResponse;

class CreateKeyGroupResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit CreateKeyGroupResponsePrivate(CreateKeyGroupResponse * const q);

    void parseCreateKeyGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateKeyGroupResponse)
    Q_DISABLE_COPY(CreateKeyGroupResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
