// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGIONALBUCKETSRESPONSE_P_H
#define QTAWS_LISTREGIONALBUCKETSRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class ListRegionalBucketsResponse;

class ListRegionalBucketsResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit ListRegionalBucketsResponsePrivate(ListRegionalBucketsResponse * const q);

    void parseListRegionalBucketsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRegionalBucketsResponse)
    Q_DISABLE_COPY(ListRegionalBucketsResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
