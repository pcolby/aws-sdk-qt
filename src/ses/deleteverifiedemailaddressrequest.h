// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVERIFIEDEMAILADDRESSREQUEST_H
#define QTAWS_DELETEVERIFIEDEMAILADDRESSREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class DeleteVerifiedEmailAddressRequestPrivate;

class QTAWSSES_EXPORT DeleteVerifiedEmailAddressRequest : public SesRequest {

public:
    DeleteVerifiedEmailAddressRequest(const DeleteVerifiedEmailAddressRequest &other);
    DeleteVerifiedEmailAddressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVerifiedEmailAddressRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
