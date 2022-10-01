// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTOVAULTREQUEST_H
#define QTAWS_ADDTAGSTOVAULTREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class AddTagsToVaultRequestPrivate;

class QTAWSGLACIER_EXPORT AddTagsToVaultRequest : public GlacierRequest {

public:
    AddTagsToVaultRequest(const AddTagsToVaultRequest &other);
    AddTagsToVaultRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddTagsToVaultRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
