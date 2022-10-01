// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCEPOLICYREQUEST_H
#define QTAWS_DELETERESOURCEPOLICYREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class DeleteResourcePolicyRequestPrivate;

class QTAWSSCHEMAS_EXPORT DeleteResourcePolicyRequest : public SchemasRequest {

public:
    DeleteResourcePolicyRequest(const DeleteResourcePolicyRequest &other);
    DeleteResourcePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourcePolicyRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
