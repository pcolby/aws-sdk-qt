// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPSREQUEST_H
#define QTAWS_LISTBACKUPSREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class ListBackupsRequestPrivate;

class QTAWSDYNAMODB_EXPORT ListBackupsRequest : public DynamoDbRequest {

public:
    ListBackupsRequest(const ListBackupsRequest &other);
    ListBackupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBackupsRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
