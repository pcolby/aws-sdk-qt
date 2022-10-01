// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRYDATAREPLICATIONRESPONSE_H
#define QTAWS_RETRYDATAREPLICATIONRESPONSE_H

#include "mgnresponse.h"
#include "retrydatareplicationrequest.h"

namespace QtAws {
namespace Mgn {

class RetryDataReplicationResponsePrivate;

class QTAWSMGN_EXPORT RetryDataReplicationResponse : public MgnResponse {
    Q_OBJECT

public:
    RetryDataReplicationResponse(const RetryDataReplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RetryDataReplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RetryDataReplicationResponse)
    Q_DISABLE_COPY(RetryDataReplicationResponse)

};

} // namespace Mgn
} // namespace QtAws

#endif
