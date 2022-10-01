// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREGISTRYREQUEST_H
#define QTAWS_CREATEREGISTRYREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class CreateRegistryRequestPrivate;

class QTAWSGLUE_EXPORT CreateRegistryRequest : public GlueRequest {

public:
    CreateRegistryRequest(const CreateRegistryRequest &other);
    CreateRegistryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRegistryRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
