// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELQUERYRESPONSE_H
#define QTAWS_CANCELQUERYRESPONSE_H

#include "cloudtrailresponse.h"
#include "cancelqueryrequest.h"

namespace QtAws {
namespace CloudTrail {

class CancelQueryResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT CancelQueryResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    CancelQueryResponse(const CancelQueryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelQueryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelQueryResponse)
    Q_DISABLE_COPY(CancelQueryResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
