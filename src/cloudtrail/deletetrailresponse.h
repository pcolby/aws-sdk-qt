// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAILRESPONSE_H
#define QTAWS_DELETETRAILRESPONSE_H

#include "cloudtrailresponse.h"
#include "deletetrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class DeleteTrailResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT DeleteTrailResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    DeleteTrailResponse(const DeleteTrailRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTrailRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrailResponse)
    Q_DISABLE_COPY(DeleteTrailResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
