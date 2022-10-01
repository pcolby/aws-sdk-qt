// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORVAULTREQUEST_H
#define QTAWS_LISTTAGSFORVAULTREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class ListTagsForVaultRequestPrivate;

class QTAWSGLACIER_EXPORT ListTagsForVaultRequest : public GlacierRequest {

public:
    ListTagsForVaultRequest(const ListTagsForVaultRequest &other);
    ListTagsForVaultRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsForVaultRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
