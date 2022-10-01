// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACLRESPONSE_H
#define QTAWS_DELETEACLRESPONSE_H

#include "memorydbresponse.h"
#include "deleteaclrequest.h"

namespace QtAws {
namespace MemoryDb {

class DeleteACLResponsePrivate;

class QTAWSMEMORYDB_EXPORT DeleteACLResponse : public MemoryDbResponse {
    Q_OBJECT

public:
    DeleteACLResponse(const DeleteACLRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteACLRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteACLResponse)
    Q_DISABLE_COPY(DeleteACLResponse)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
