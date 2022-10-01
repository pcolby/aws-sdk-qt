// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACLRESPONSE_H
#define QTAWS_CREATEACLRESPONSE_H

#include "memorydbresponse.h"
#include "createaclrequest.h"

namespace QtAws {
namespace MemoryDb {

class CreateACLResponsePrivate;

class QTAWSMEMORYDB_EXPORT CreateACLResponse : public MemoryDbResponse {
    Q_OBJECT

public:
    CreateACLResponse(const CreateACLRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateACLRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateACLResponse)
    Q_DISABLE_COPY(CreateACLResponse)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
