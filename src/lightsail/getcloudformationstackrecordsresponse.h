// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLOUDFORMATIONSTACKRECORDSRESPONSE_H
#define QTAWS_GETCLOUDFORMATIONSTACKRECORDSRESPONSE_H

#include "lightsailresponse.h"
#include "getcloudformationstackrecordsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetCloudFormationStackRecordsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetCloudFormationStackRecordsResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetCloudFormationStackRecordsResponse(const GetCloudFormationStackRecordsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCloudFormationStackRecordsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCloudFormationStackRecordsResponse)
    Q_DISABLE_COPY(GetCloudFormationStackRecordsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
