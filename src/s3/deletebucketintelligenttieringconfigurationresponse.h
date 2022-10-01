// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETINTELLIGENTTIERINGCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEBUCKETINTELLIGENTTIERINGCONFIGURATIONRESPONSE_H

#include "s3response.h"
#include "deletebucketintelligenttieringconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketIntelligentTieringConfigurationResponsePrivate;

class QTAWSS3_EXPORT DeleteBucketIntelligentTieringConfigurationResponse : public S3Response {
    Q_OBJECT

public:
    DeleteBucketIntelligentTieringConfigurationResponse(const DeleteBucketIntelligentTieringConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBucketIntelligentTieringConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketIntelligentTieringConfigurationResponse)
    Q_DISABLE_COPY(DeleteBucketIntelligentTieringConfigurationResponse)

};

} // namespace S3
} // namespace QtAws

#endif
