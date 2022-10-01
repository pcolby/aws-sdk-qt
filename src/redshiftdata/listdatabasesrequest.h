// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATABASESREQUEST_H
#define QTAWS_LISTDATABASESREQUEST_H

#include "redshiftdatarequest.h"

namespace QtAws {
namespace RedshiftData {

class ListDatabasesRequestPrivate;

class QTAWSREDSHIFTDATA_EXPORT ListDatabasesRequest : public RedshiftDataRequest {

public:
    ListDatabasesRequest(const ListDatabasesRequest &other);
    ListDatabasesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDatabasesRequest)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
