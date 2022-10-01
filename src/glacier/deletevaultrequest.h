// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVAULTREQUEST_H
#define QTAWS_DELETEVAULTREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class DeleteVaultRequestPrivate;

class QTAWSGLACIER_EXPORT DeleteVaultRequest : public GlacierRequest {

public:
    DeleteVaultRequest(const DeleteVaultRequest &other);
    DeleteVaultRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVaultRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
