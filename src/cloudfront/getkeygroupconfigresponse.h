// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYGROUPCONFIGRESPONSE_H
#define QTAWS_GETKEYGROUPCONFIGRESPONSE_H

#include "cloudfrontresponse.h"
#include "getkeygroupconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetKeyGroupConfigResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetKeyGroupConfigResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetKeyGroupConfigResponse(const GetKeyGroupConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetKeyGroupConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetKeyGroupConfigResponse)
    Q_DISABLE_COPY(GetKeyGroupConfigResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
