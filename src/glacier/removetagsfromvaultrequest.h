// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSFROMVAULTREQUEST_H
#define QTAWS_REMOVETAGSFROMVAULTREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class RemoveTagsFromVaultRequestPrivate;

class QTAWSGLACIER_EXPORT RemoveTagsFromVaultRequest : public GlacierRequest {

public:
    RemoveTagsFromVaultRequest(const RemoveTagsFromVaultRequest &other);
    RemoveTagsFromVaultRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveTagsFromVaultRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
