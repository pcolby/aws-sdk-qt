// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORIGINACCESSCONTROLRESPONSE_P_H
#define QTAWS_CREATEORIGINACCESSCONTROLRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class CreateOriginAccessControlResponse;

class CreateOriginAccessControlResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit CreateOriginAccessControlResponsePrivate(CreateOriginAccessControlResponse * const q);

    void parseCreateOriginAccessControlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateOriginAccessControlResponse)
    Q_DISABLE_COPY(CreateOriginAccessControlResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
