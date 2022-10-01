// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETBUNDLESRESPONSE_H
#define QTAWS_GETBUCKETBUNDLESRESPONSE_H

#include "lightsailresponse.h"
#include "getbucketbundlesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetBucketBundlesResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetBucketBundlesResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetBucketBundlesResponse(const GetBucketBundlesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketBundlesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketBundlesResponse)
    Q_DISABLE_COPY(GetBucketBundlesResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
