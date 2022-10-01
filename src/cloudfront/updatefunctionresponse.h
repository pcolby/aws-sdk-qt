// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONRESPONSE_H
#define QTAWS_UPDATEFUNCTIONRESPONSE_H

#include "cloudfrontresponse.h"
#include "updatefunctionrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateFunctionResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT UpdateFunctionResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    UpdateFunctionResponse(const UpdateFunctionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFunctionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFunctionResponse)
    Q_DISABLE_COPY(UpdateFunctionResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
