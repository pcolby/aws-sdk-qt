// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRYDATAREPLICATIONRESPONSE_H
#define QTAWS_RETRYDATAREPLICATIONRESPONSE_H

#include "drsresponse.h"
#include "retrydatareplicationrequest.h"

namespace QtAws {
namespace Drs {

class RetryDataReplicationResponsePrivate;

class QTAWSDRS_EXPORT RetryDataReplicationResponse : public DrsResponse {
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

} // namespace Drs
} // namespace QtAws

#endif
