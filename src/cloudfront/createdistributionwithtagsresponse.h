// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISTRIBUTIONWITHTAGSRESPONSE_H
#define QTAWS_CREATEDISTRIBUTIONWITHTAGSRESPONSE_H

#include "cloudfrontresponse.h"
#include "createdistributionwithtagsrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateDistributionWithTagsResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT CreateDistributionWithTagsResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    CreateDistributionWithTagsResponse(const CreateDistributionWithTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDistributionWithTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDistributionWithTagsResponse)
    Q_DISABLE_COPY(CreateDistributionWithTagsResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
