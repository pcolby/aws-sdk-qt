// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORRESOURCEREQUEST_H
#define QTAWS_LISTTAGSFORRESOURCEREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class ListTagsForResourceRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT ListTagsForResourceRequest : public DatabaseMigrationRequest {

public:
    ListTagsForResourceRequest(const ListTagsForResourceRequest &other);
    ListTagsForResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsForResourceRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
