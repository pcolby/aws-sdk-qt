// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTREQUEST_H
#define QTAWS_DELETEACCOUNTREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DeleteAccountRequestPrivate;

class QTAWSCHIME_EXPORT DeleteAccountRequest : public ChimeRequest {

public:
    DeleteAccountRequest(const DeleteAccountRequest &other);
    DeleteAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccountRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
