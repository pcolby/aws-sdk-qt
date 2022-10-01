// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUNSUSPENDUSERRESPONSE_H
#define QTAWS_BATCHUNSUSPENDUSERRESPONSE_H

#include "chimeresponse.h"
#include "batchunsuspenduserrequest.h"

namespace QtAws {
namespace Chime {

class BatchUnsuspendUserResponsePrivate;

class QTAWSCHIME_EXPORT BatchUnsuspendUserResponse : public ChimeResponse {
    Q_OBJECT

public:
    BatchUnsuspendUserResponse(const BatchUnsuspendUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchUnsuspendUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchUnsuspendUserResponse)
    Q_DISABLE_COPY(BatchUnsuspendUserResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
