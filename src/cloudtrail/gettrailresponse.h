// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRAILRESPONSE_H
#define QTAWS_GETTRAILRESPONSE_H

#include "cloudtrailresponse.h"
#include "gettrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class GetTrailResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT GetTrailResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    GetTrailResponse(const GetTrailRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTrailRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTrailResponse)
    Q_DISABLE_COPY(GetTrailResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
