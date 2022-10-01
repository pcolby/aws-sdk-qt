// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCODEBINDINGREQUEST_H
#define QTAWS_PUTCODEBINDINGREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class PutCodeBindingRequestPrivate;

class QTAWSSCHEMAS_EXPORT PutCodeBindingRequest : public SchemasRequest {

public:
    PutCodeBindingRequest(const PutCodeBindingRequest &other);
    PutCodeBindingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutCodeBindingRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
