// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTSELECTORSRESPONSE_H
#define QTAWS_PUTEVENTSELECTORSRESPONSE_H

#include "cloudtrailresponse.h"
#include "puteventselectorsrequest.h"

namespace QtAws {
namespace CloudTrail {

class PutEventSelectorsResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT PutEventSelectorsResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    PutEventSelectorsResponse(const PutEventSelectorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutEventSelectorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEventSelectorsResponse)
    Q_DISABLE_COPY(PutEventSelectorsResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
