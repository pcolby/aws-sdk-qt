// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCODEBINDINGSOURCEREQUEST_H
#define QTAWS_GETCODEBINDINGSOURCEREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class GetCodeBindingSourceRequestPrivate;

class QTAWSSCHEMAS_EXPORT GetCodeBindingSourceRequest : public SchemasRequest {

public:
    GetCodeBindingSourceRequest(const GetCodeBindingSourceRequest &other);
    GetCodeBindingSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCodeBindingSourceRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
