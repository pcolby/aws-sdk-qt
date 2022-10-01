// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPINSTANCERETENTIONSETTINGSREQUEST_H
#define QTAWS_GETAPPINSTANCERETENTIONSETTINGSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetAppInstanceRetentionSettingsRequestPrivate;

class QTAWSCHIME_EXPORT GetAppInstanceRetentionSettingsRequest : public ChimeRequest {

public:
    GetAppInstanceRetentionSettingsRequest(const GetAppInstanceRetentionSettingsRequest &other);
    GetAppInstanceRetentionSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAppInstanceRetentionSettingsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
