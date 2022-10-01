// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTATTRIBUTESRESPONSE_P_H
#define QTAWS_GETOBJECTATTRIBUTESRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetObjectAttributesResponse;

class GetObjectAttributesResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetObjectAttributesResponsePrivate(GetObjectAttributesResponse * const q);

    void parseGetObjectAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetObjectAttributesResponse)
    Q_DISABLE_COPY(GetObjectAttributesResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
