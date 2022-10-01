// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPHONENUMBERREQUEST_H
#define QTAWS_GETPHONENUMBERREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetPhoneNumberRequestPrivate;

class QTAWSCHIME_EXPORT GetPhoneNumberRequest : public ChimeRequest {

public:
    GetPhoneNumberRequest(const GetPhoneNumberRequest &other);
    GetPhoneNumberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPhoneNumberRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
