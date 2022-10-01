// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONRESPONSE_P_H
#define QTAWS_DELETEFUNCTIONRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class DeleteFunctionResponse;

class DeleteFunctionResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit DeleteFunctionResponsePrivate(DeleteFunctionResponse * const q);

    void parseDeleteFunctionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFunctionResponse)
    Q_DISABLE_COPY(DeleteFunctionResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
