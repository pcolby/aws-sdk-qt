// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTSELECTORSRESPONSE_H
#define QTAWS_GETEVENTSELECTORSRESPONSE_H

#include "cloudtrailresponse.h"
#include "geteventselectorsrequest.h"

namespace QtAws {
namespace CloudTrail {

class GetEventSelectorsResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT GetEventSelectorsResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    GetEventSelectorsResponse(const GetEventSelectorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEventSelectorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventSelectorsResponse)
    Q_DISABLE_COPY(GetEventSelectorsResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
