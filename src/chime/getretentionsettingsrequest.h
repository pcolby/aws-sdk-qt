// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRETENTIONSETTINGSREQUEST_H
#define QTAWS_GETRETENTIONSETTINGSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetRetentionSettingsRequestPrivate;

class QTAWSCHIME_EXPORT GetRetentionSettingsRequest : public ChimeRequest {

public:
    GetRetentionSettingsRequest(const GetRetentionSettingsRequest &other);
    GetRetentionSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRetentionSettingsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
