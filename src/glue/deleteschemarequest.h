// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEMAREQUEST_H
#define QTAWS_DELETESCHEMAREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class DeleteSchemaRequestPrivate;

class QTAWSGLUE_EXPORT DeleteSchemaRequest : public GlueRequest {

public:
    DeleteSchemaRequest(const DeleteSchemaRequest &other);
    DeleteSchemaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSchemaRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
