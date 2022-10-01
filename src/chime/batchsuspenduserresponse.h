// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSUSPENDUSERRESPONSE_H
#define QTAWS_BATCHSUSPENDUSERRESPONSE_H

#include "chimeresponse.h"
#include "batchsuspenduserrequest.h"

namespace QtAws {
namespace Chime {

class BatchSuspendUserResponsePrivate;

class QTAWSCHIME_EXPORT BatchSuspendUserResponse : public ChimeResponse {
    Q_OBJECT

public:
    BatchSuspendUserResponse(const BatchSuspendUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchSuspendUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchSuspendUserResponse)
    Q_DISABLE_COPY(BatchSuspendUserResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
