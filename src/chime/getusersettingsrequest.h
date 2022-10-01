// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERSETTINGSREQUEST_H
#define QTAWS_GETUSERSETTINGSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetUserSettingsRequestPrivate;

class QTAWSCHIME_EXPORT GetUserSettingsRequest : public ChimeRequest {

public:
    GetUserSettingsRequest(const GetUserSettingsRequest &other);
    GetUserSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUserSettingsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
