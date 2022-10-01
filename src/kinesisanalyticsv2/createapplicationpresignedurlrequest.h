// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONPRESIGNEDURLREQUEST_H
#define QTAWS_CREATEAPPLICATIONPRESIGNEDURLREQUEST_H

#include "kinesisanalyticsv2request.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class CreateApplicationPresignedUrlRequestPrivate;

class QTAWSKINESISANALYTICSV2_EXPORT CreateApplicationPresignedUrlRequest : public KinesisAnalyticsV2Request {

public:
    CreateApplicationPresignedUrlRequest(const CreateApplicationPresignedUrlRequest &other);
    CreateApplicationPresignedUrlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApplicationPresignedUrlRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
