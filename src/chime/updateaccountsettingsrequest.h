// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTSETTINGSREQUEST_H
#define QTAWS_UPDATEACCOUNTSETTINGSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class UpdateAccountSettingsRequestPrivate;

class QTAWSCHIME_EXPORT UpdateAccountSettingsRequest : public ChimeRequest {

public:
    UpdateAccountSettingsRequest(const UpdateAccountSettingsRequest &other);
    UpdateAccountSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAccountSettingsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
