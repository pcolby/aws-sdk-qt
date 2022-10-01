// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREPHONENUMBERREQUEST_H
#define QTAWS_RESTOREPHONENUMBERREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class RestorePhoneNumberRequestPrivate;

class QTAWSCHIME_EXPORT RestorePhoneNumberRequest : public ChimeRequest {

public:
    RestorePhoneNumberRequest(const RestorePhoneNumberRequest &other);
    RestorePhoneNumberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestorePhoneNumberRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
