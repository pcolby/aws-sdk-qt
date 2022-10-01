// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHFUNCTIONRESPONSE_H
#define QTAWS_PUBLISHFUNCTIONRESPONSE_H

#include "cloudfrontresponse.h"
#include "publishfunctionrequest.h"

namespace QtAws {
namespace CloudFront {

class PublishFunctionResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT PublishFunctionResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    PublishFunctionResponse(const PublishFunctionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PublishFunctionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PublishFunctionResponse)
    Q_DISABLE_COPY(PublishFunctionResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
