// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERRESPONSE_H
#define QTAWS_UPDATEUSERRESPONSE_H

#include "memorydbresponse.h"
#include "updateuserrequest.h"

namespace QtAws {
namespace MemoryDb {

class UpdateUserResponsePrivate;

class QTAWSMEMORYDB_EXPORT UpdateUserResponse : public MemoryDbResponse {
    Q_OBJECT

public:
    UpdateUserResponse(const UpdateUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserResponse)
    Q_DISABLE_COPY(UpdateUserResponse)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
