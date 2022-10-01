// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMPORTRESPONSE_H
#define QTAWS_STARTIMPORTRESPONSE_H

#include "cloudtrailresponse.h"
#include "startimportrequest.h"

namespace QtAws {
namespace CloudTrail {

class StartImportResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT StartImportResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    StartImportResponse(const StartImportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartImportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartImportResponse)
    Q_DISABLE_COPY(StartImportResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
