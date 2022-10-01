// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPHONENUMBERREQUEST_H
#define QTAWS_DELETEPHONENUMBERREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DeletePhoneNumberRequestPrivate;

class QTAWSCHIME_EXPORT DeletePhoneNumberRequest : public ChimeRequest {

public:
    DeletePhoneNumberRequest(const DeletePhoneNumberRequest &other);
    DeletePhoneNumberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePhoneNumberRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
