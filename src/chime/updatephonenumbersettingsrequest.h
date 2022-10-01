// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPHONENUMBERSETTINGSREQUEST_H
#define QTAWS_UPDATEPHONENUMBERSETTINGSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class UpdatePhoneNumberSettingsRequestPrivate;

class QTAWSCHIME_EXPORT UpdatePhoneNumberSettingsRequest : public ChimeRequest {

public:
    UpdatePhoneNumberSettingsRequest(const UpdatePhoneNumberSettingsRequest &other);
    UpdatePhoneNumberSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePhoneNumberSettingsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
