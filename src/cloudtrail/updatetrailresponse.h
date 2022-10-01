// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRAILRESPONSE_H
#define QTAWS_UPDATETRAILRESPONSE_H

#include "cloudtrailresponse.h"
#include "updatetrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class UpdateTrailResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT UpdateTrailResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    UpdateTrailResponse(const UpdateTrailRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTrailRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTrailResponse)
    Q_DISABLE_COPY(UpdateTrailResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
