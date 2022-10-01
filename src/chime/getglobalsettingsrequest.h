// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGLOBALSETTINGSREQUEST_H
#define QTAWS_GETGLOBALSETTINGSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetGlobalSettingsRequestPrivate;

class QTAWSCHIME_EXPORT GetGlobalSettingsRequest : public ChimeRequest {

public:
    GetGlobalSettingsRequest(const GetGlobalSettingsRequest &other);
    GetGlobalSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGlobalSettingsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
