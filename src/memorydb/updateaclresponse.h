// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACLRESPONSE_H
#define QTAWS_UPDATEACLRESPONSE_H

#include "memorydbresponse.h"
#include "updateaclrequest.h"

namespace QtAws {
namespace MemoryDb {

class UpdateACLResponsePrivate;

class QTAWSMEMORYDB_EXPORT UpdateACLResponse : public MemoryDbResponse {
    Q_OBJECT

public:
    UpdateACLResponse(const UpdateACLRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateACLRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateACLResponse)
    Q_DISABLE_COPY(UpdateACLResponse)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
