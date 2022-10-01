// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMINGDISTRIBUTIONRESPONSE_H
#define QTAWS_DELETESTREAMINGDISTRIBUTIONRESPONSE_H

#include "cloudfrontresponse.h"
#include "deletestreamingdistributionrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteStreamingDistributionResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteStreamingDistributionResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    DeleteStreamingDistributionResponse(const DeleteStreamingDistributionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteStreamingDistributionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStreamingDistributionResponse)
    Q_DISABLE_COPY(DeleteStreamingDistributionResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
