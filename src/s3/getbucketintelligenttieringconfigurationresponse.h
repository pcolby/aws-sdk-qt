// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETINTELLIGENTTIERINGCONFIGURATIONRESPONSE_H
#define QTAWS_GETBUCKETINTELLIGENTTIERINGCONFIGURATIONRESPONSE_H

#include "s3response.h"
#include "getbucketintelligenttieringconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketIntelligentTieringConfigurationResponsePrivate;

class QTAWSS3_EXPORT GetBucketIntelligentTieringConfigurationResponse : public S3Response {
    Q_OBJECT

public:
    GetBucketIntelligentTieringConfigurationResponse(const GetBucketIntelligentTieringConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketIntelligentTieringConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketIntelligentTieringConfigurationResponse)
    Q_DISABLE_COPY(GetBucketIntelligentTieringConfigurationResponse)

};

} // namespace S3
} // namespace QtAws

#endif
