// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELRESPONSE_H
#define QTAWS_GETCHANNELRESPONSE_H

#include "cloudtrailresponse.h"
#include "getchannelrequest.h"

namespace QtAws {
namespace CloudTrail {

class GetChannelResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT GetChannelResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    GetChannelResponse(const GetChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChannelResponse)
    Q_DISABLE_COPY(GetChannelResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
