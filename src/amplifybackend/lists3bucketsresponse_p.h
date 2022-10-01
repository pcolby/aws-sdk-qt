// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTS3BUCKETSRESPONSE_P_H
#define QTAWS_LISTS3BUCKETSRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class ListS3BucketsResponse;

class ListS3BucketsResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit ListS3BucketsResponsePrivate(ListS3BucketsResponse * const q);

    void parseListS3BucketsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListS3BucketsResponse)
    Q_DISABLE_COPY(ListS3BucketsResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
