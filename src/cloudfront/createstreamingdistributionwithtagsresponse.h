// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMINGDISTRIBUTIONWITHTAGSRESPONSE_H
#define QTAWS_CREATESTREAMINGDISTRIBUTIONWITHTAGSRESPONSE_H

#include "cloudfrontresponse.h"
#include "createstreamingdistributionwithtagsrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateStreamingDistributionWithTagsResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT CreateStreamingDistributionWithTagsResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    CreateStreamingDistributionWithTagsResponse(const CreateStreamingDistributionWithTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStreamingDistributionWithTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStreamingDistributionWithTagsResponse)
    Q_DISABLE_COPY(CreateStreamingDistributionWithTagsResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
