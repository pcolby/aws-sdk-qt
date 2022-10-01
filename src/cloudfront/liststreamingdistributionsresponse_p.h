// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMINGDISTRIBUTIONSRESPONSE_P_H
#define QTAWS_LISTSTREAMINGDISTRIBUTIONSRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class ListStreamingDistributionsResponse;

class ListStreamingDistributionsResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit ListStreamingDistributionsResponsePrivate(ListStreamingDistributionsResponse * const q);

    void parseListStreamingDistributionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStreamingDistributionsResponse)
    Q_DISABLE_COPY(ListStreamingDistributionsResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
