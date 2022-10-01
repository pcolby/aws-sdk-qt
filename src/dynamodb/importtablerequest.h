// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTTABLEREQUEST_H
#define QTAWS_IMPORTTABLEREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class ImportTableRequestPrivate;

class QTAWSDYNAMODB_EXPORT ImportTableRequest : public DynamoDbRequest {

public:
    ImportTableRequest(const ImportTableRequest &other);
    ImportTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportTableRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
