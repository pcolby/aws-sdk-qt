// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMINGDISTRIBUTIONSRESPONSE_H
#define QTAWS_LISTSTREAMINGDISTRIBUTIONSRESPONSE_H

#include "cloudfrontresponse.h"
#include "liststreamingdistributionsrequest.h"

namespace QtAws {
namespace CloudFront {

class ListStreamingDistributionsResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT ListStreamingDistributionsResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    ListStreamingDistributionsResponse(const ListStreamingDistributionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStreamingDistributionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStreamingDistributionsResponse)
    Q_DISABLE_COPY(ListStreamingDistributionsResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
