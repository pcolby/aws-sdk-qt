// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPHONENUMBERSETTINGSREQUEST_H
#define QTAWS_GETPHONENUMBERSETTINGSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetPhoneNumberSettingsRequestPrivate;

class QTAWSCHIME_EXPORT GetPhoneNumberSettingsRequest : public ChimeRequest {

public:
    GetPhoneNumberSettingsRequest(const GetPhoneNumberSettingsRequest &other);
    GetPhoneNumberSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPhoneNumberSettingsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
