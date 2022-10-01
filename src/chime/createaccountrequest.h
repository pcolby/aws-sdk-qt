// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCOUNTREQUEST_H
#define QTAWS_CREATEACCOUNTREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class CreateAccountRequestPrivate;

class QTAWSCHIME_EXPORT CreateAccountRequest : public ChimeRequest {

public:
    CreateAccountRequest(const CreateAccountRequest &other);
    CreateAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAccountRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
