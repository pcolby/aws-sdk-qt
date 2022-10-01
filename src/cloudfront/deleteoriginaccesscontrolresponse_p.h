// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORIGINACCESSCONTROLRESPONSE_P_H
#define QTAWS_DELETEORIGINACCESSCONTROLRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class DeleteOriginAccessControlResponse;

class DeleteOriginAccessControlResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit DeleteOriginAccessControlResponsePrivate(DeleteOriginAccessControlResponse * const q);

    void parseDeleteOriginAccessControlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteOriginAccessControlResponse)
    Q_DISABLE_COPY(DeleteOriginAccessControlResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
