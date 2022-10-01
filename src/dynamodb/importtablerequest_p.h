// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTTABLEREQUEST_P_H
#define QTAWS_IMPORTTABLEREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "importtablerequest.h"

namespace QtAws {
namespace DynamoDb {

class ImportTableRequest;

class ImportTableRequestPrivate : public DynamoDbRequestPrivate {

public:
    ImportTableRequestPrivate(const DynamoDbRequest::Action action,
                                   ImportTableRequest * const q);
    ImportTableRequestPrivate(const ImportTableRequestPrivate &other,
                                   ImportTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportTableRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
