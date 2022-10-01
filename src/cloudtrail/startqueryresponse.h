// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTQUERYRESPONSE_H
#define QTAWS_STARTQUERYRESPONSE_H

#include "cloudtrailresponse.h"
#include "startqueryrequest.h"

namespace QtAws {
namespace CloudTrail {

class StartQueryResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT StartQueryResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    StartQueryResponse(const StartQueryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartQueryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartQueryResponse)
    Q_DISABLE_COPY(StartQueryResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
