// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGRESOURCERESPONSE_H
#define QTAWS_UNTAGRESOURCERESPONSE_H

#include "kinesisanalyticsv2response.h"
#include "untagresourcerequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class UntagResourceResponsePrivate;

class QTAWSKINESISANALYTICSV2_EXPORT UntagResourceResponse : public KinesisAnalyticsV2Response {
    Q_OBJECT

public:
    UntagResourceResponse(const UntagResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UntagResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagResourceResponse)
    Q_DISABLE_COPY(UntagResourceResponse)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
