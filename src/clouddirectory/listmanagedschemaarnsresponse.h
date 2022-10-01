// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDSCHEMAARNSRESPONSE_H
#define QTAWS_LISTMANAGEDSCHEMAARNSRESPONSE_H

#include "clouddirectoryresponse.h"
#include "listmanagedschemaarnsrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListManagedSchemaArnsResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListManagedSchemaArnsResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    ListManagedSchemaArnsResponse(const ListManagedSchemaArnsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListManagedSchemaArnsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListManagedSchemaArnsResponse)
    Q_DISABLE_COPY(ListManagedSchemaArnsResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
