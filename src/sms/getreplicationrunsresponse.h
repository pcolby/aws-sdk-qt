// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPLICATIONRUNSRESPONSE_H
#define QTAWS_GETREPLICATIONRUNSRESPONSE_H

#include "smsresponse.h"
#include "getreplicationrunsrequest.h"

namespace QtAws {
namespace Sms {

class GetReplicationRunsResponsePrivate;

class QTAWSSMS_EXPORT GetReplicationRunsResponse : public SmsResponse {
    Q_OBJECT

public:
    GetReplicationRunsResponse(const GetReplicationRunsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetReplicationRunsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReplicationRunsResponse)
    Q_DISABLE_COPY(GetReplicationRunsResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
