// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETABLEREQUEST_H
#define QTAWS_CREATETABLEREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class CreateTableRequestPrivate;

class QTAWSGLUE_EXPORT CreateTableRequest : public GlueRequest {

public:
    CreateTableRequest(const CreateTableRequest &other);
    CreateTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTableRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
