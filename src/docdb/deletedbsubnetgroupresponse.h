// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBSUBNETGROUPRESPONSE_H
#define QTAWS_DELETEDBSUBNETGROUPRESPONSE_H

#include "docdbresponse.h"
#include "deletedbsubnetgrouprequest.h"

namespace QtAws {
namespace DocDb {

class DeleteDBSubnetGroupResponsePrivate;

class QTAWSDOCDB_EXPORT DeleteDBSubnetGroupResponse : public DocDbResponse {
    Q_OBJECT

public:
    DeleteDBSubnetGroupResponse(const DeleteDBSubnetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDBSubnetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBSubnetGroupResponse)
    Q_DISABLE_COPY(DeleteDBSubnetGroupResponse)

};

} // namespace DocDb
} // namespace QtAws

#endif
