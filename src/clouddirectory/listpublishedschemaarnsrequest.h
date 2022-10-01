// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPUBLISHEDSCHEMAARNSREQUEST_H
#define QTAWS_LISTPUBLISHEDSCHEMAARNSREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListPublishedSchemaArnsRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListPublishedSchemaArnsRequest : public CloudDirectoryRequest {

public:
    ListPublishedSchemaArnsRequest(const ListPublishedSchemaArnsRequest &other);
    ListPublishedSchemaArnsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPublishedSchemaArnsRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
