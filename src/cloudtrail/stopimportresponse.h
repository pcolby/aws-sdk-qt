// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPIMPORTRESPONSE_H
#define QTAWS_STOPIMPORTRESPONSE_H

#include "cloudtrailresponse.h"
#include "stopimportrequest.h"

namespace QtAws {
namespace CloudTrail {

class StopImportResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT StopImportResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    StopImportResponse(const StopImportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopImportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopImportResponse)
    Q_DISABLE_COPY(StopImportResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
