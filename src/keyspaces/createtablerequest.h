// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETABLEREQUEST_H
#define QTAWS_CREATETABLEREQUEST_H

#include "keyspacesrequest.h"

namespace QtAws {
namespace Keyspaces {

class CreateTableRequestPrivate;

class QTAWSKEYSPACES_EXPORT CreateTableRequest : public KeyspacesRequest {

public:
    CreateTableRequest(const CreateTableRequest &other);
    CreateTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTableRequest)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
