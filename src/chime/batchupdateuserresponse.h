// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEUSERRESPONSE_H
#define QTAWS_BATCHUPDATEUSERRESPONSE_H

#include "chimeresponse.h"
#include "batchupdateuserrequest.h"

namespace QtAws {
namespace Chime {

class BatchUpdateUserResponsePrivate;

class QTAWSCHIME_EXPORT BatchUpdateUserResponse : public ChimeResponse {
    Q_OBJECT

public:
    BatchUpdateUserResponse(const BatchUpdateUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchUpdateUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchUpdateUserResponse)
    Q_DISABLE_COPY(BatchUpdateUserResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
