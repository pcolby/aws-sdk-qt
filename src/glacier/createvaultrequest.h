// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVAULTREQUEST_H
#define QTAWS_CREATEVAULTREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class CreateVaultRequestPrivate;

class QTAWSGLACIER_EXPORT CreateVaultRequest : public GlacierRequest {

public:
    CreateVaultRequest(const CreateVaultRequest &other);
    CreateVaultRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVaultRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
