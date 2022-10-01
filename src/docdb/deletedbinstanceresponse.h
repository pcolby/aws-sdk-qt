// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBINSTANCERESPONSE_H
#define QTAWS_DELETEDBINSTANCERESPONSE_H

#include "docdbresponse.h"
#include "deletedbinstancerequest.h"

namespace QtAws {
namespace DocDb {

class DeleteDBInstanceResponsePrivate;

class QTAWSDOCDB_EXPORT DeleteDBInstanceResponse : public DocDbResponse {
    Q_OBJECT

public:
    DeleteDBInstanceResponse(const DeleteDBInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDBInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBInstanceResponse)
    Q_DISABLE_COPY(DeleteDBInstanceResponse)

};

} // namespace DocDb
} // namespace QtAws

#endif
