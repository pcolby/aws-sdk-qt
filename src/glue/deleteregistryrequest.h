// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGISTRYREQUEST_H
#define QTAWS_DELETEREGISTRYREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class DeleteRegistryRequestPrivate;

class QTAWSGLUE_EXPORT DeleteRegistryRequest : public GlueRequest {

public:
    DeleteRegistryRequest(const DeleteRegistryRequest &other);
    DeleteRegistryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRegistryRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
