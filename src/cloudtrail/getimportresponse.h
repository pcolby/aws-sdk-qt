// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMPORTRESPONSE_H
#define QTAWS_GETIMPORTRESPONSE_H

#include "cloudtrailresponse.h"
#include "getimportrequest.h"

namespace QtAws {
namespace CloudTrail {

class GetImportResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT GetImportResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    GetImportResponse(const GetImportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetImportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetImportResponse)
    Q_DISABLE_COPY(GetImportResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
