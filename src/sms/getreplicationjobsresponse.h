// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPLICATIONJOBSRESPONSE_H
#define QTAWS_GETREPLICATIONJOBSRESPONSE_H

#include "smsresponse.h"
#include "getreplicationjobsrequest.h"

namespace QtAws {
namespace Sms {

class GetReplicationJobsResponsePrivate;

class QTAWSSMS_EXPORT GetReplicationJobsResponse : public SmsResponse {
    Q_OBJECT

public:
    GetReplicationJobsResponse(const GetReplicationJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetReplicationJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReplicationJobsResponse)
    Q_DISABLE_COPY(GetReplicationJobsResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
