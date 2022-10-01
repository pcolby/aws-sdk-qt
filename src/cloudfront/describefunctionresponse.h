// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFUNCTIONRESPONSE_H
#define QTAWS_DESCRIBEFUNCTIONRESPONSE_H

#include "cloudfrontresponse.h"
#include "describefunctionrequest.h"

namespace QtAws {
namespace CloudFront {

class DescribeFunctionResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT DescribeFunctionResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    DescribeFunctionResponse(const DescribeFunctionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFunctionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFunctionResponse)
    Q_DISABLE_COPY(DescribeFunctionResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
