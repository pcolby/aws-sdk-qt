// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETRESOURCEACCESSFORBUCKETRESPONSE_H
#define QTAWS_SETRESOURCEACCESSFORBUCKETRESPONSE_H

#include "lightsailresponse.h"
#include "setresourceaccessforbucketrequest.h"

namespace QtAws {
namespace Lightsail {

class SetResourceAccessForBucketResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT SetResourceAccessForBucketResponse : public LightsailResponse {
    Q_OBJECT

public:
    SetResourceAccessForBucketResponse(const SetResourceAccessForBucketRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetResourceAccessForBucketRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetResourceAccessForBucketResponse)
    Q_DISABLE_COPY(SetResourceAccessForBucketResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
