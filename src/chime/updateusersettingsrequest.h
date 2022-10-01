// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERSETTINGSREQUEST_H
#define QTAWS_UPDATEUSERSETTINGSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class UpdateUserSettingsRequestPrivate;

class QTAWSCHIME_EXPORT UpdateUserSettingsRequest : public ChimeRequest {

public:
    UpdateUserSettingsRequest(const UpdateUserSettingsRequest &other);
    UpdateUserSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserSettingsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
