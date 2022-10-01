// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBUCKETBUNDLERESPONSE_H
#define QTAWS_UPDATEBUCKETBUNDLERESPONSE_H

#include "lightsailresponse.h"
#include "updatebucketbundlerequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateBucketBundleResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT UpdateBucketBundleResponse : public LightsailResponse {
    Q_OBJECT

public:
    UpdateBucketBundleResponse(const UpdateBucketBundleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBucketBundleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBucketBundleResponse)
    Q_DISABLE_COPY(UpdateBucketBundleResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
