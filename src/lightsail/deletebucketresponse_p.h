// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETRESPONSE_P_H
#define QTAWS_DELETEBUCKETRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class DeleteBucketResponse;

class DeleteBucketResponsePrivate : public LightsailResponsePrivate {

public:

    explicit DeleteBucketResponsePrivate(DeleteBucketResponse * const q);

    void parseDeleteBucketResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBucketResponse)
    Q_DISABLE_COPY(DeleteBucketResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
