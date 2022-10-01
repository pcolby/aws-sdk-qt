// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SELECTOBJECTCONTENTRESPONSE_P_H
#define QTAWS_SELECTOBJECTCONTENTRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class SelectObjectContentResponse;

class SelectObjectContentResponsePrivate : public S3ResponsePrivate {

public:

    explicit SelectObjectContentResponsePrivate(SelectObjectContentResponse * const q);

    void parseSelectObjectContentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SelectObjectContentResponse)
    Q_DISABLE_COPY(SelectObjectContentResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
