// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPORTSREQUEST_H
#define QTAWS_LISTEXPORTSREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class ListExportsRequestPrivate;

class QTAWSDYNAMODB_EXPORT ListExportsRequest : public DynamoDbRequest {

public:
    ListExportsRequest(const ListExportsRequest &other);
    ListExportsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExportsRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
