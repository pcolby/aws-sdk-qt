// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPLICATIONRESPONSE_H
#define QTAWS_STARTREPLICATIONRESPONSE_H

#include "mgnresponse.h"
#include "startreplicationrequest.h"

namespace QtAws {
namespace Mgn {

class StartReplicationResponsePrivate;

class QTAWSMGN_EXPORT StartReplicationResponse : public MgnResponse {
    Q_OBJECT

public:
    StartReplicationResponse(const StartReplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartReplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartReplicationResponse)
    Q_DISABLE_COPY(StartReplicationResponse)

};

} // namespace Mgn
} // namespace QtAws

#endif
