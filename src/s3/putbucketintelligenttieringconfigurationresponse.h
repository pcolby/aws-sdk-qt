// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETINTELLIGENTTIERINGCONFIGURATIONRESPONSE_H
#define QTAWS_PUTBUCKETINTELLIGENTTIERINGCONFIGURATIONRESPONSE_H

#include "s3response.h"
#include "putbucketintelligenttieringconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketIntelligentTieringConfigurationResponsePrivate;

class QTAWSS3_EXPORT PutBucketIntelligentTieringConfigurationResponse : public S3Response {
    Q_OBJECT

public:
    PutBucketIntelligentTieringConfigurationResponse(const PutBucketIntelligentTieringConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBucketIntelligentTieringConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketIntelligentTieringConfigurationResponse)
    Q_DISABLE_COPY(PutBucketIntelligentTieringConfigurationResponse)

};

} // namespace S3
} // namespace QtAws

#endif
