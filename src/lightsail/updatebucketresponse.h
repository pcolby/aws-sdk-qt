// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBUCKETRESPONSE_H
#define QTAWS_UPDATEBUCKETRESPONSE_H

#include "lightsailresponse.h"
#include "updatebucketrequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateBucketResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT UpdateBucketResponse : public LightsailResponse {
    Q_OBJECT

public:
    UpdateBucketResponse(const UpdateBucketRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBucketRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBucketResponse)
    Q_DISABLE_COPY(UpdateBucketResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
