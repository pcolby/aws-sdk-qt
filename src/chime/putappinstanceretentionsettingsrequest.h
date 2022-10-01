// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPINSTANCERETENTIONSETTINGSREQUEST_H
#define QTAWS_PUTAPPINSTANCERETENTIONSETTINGSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class PutAppInstanceRetentionSettingsRequestPrivate;

class QTAWSCHIME_EXPORT PutAppInstanceRetentionSettingsRequest : public ChimeRequest {

public:
    PutAppInstanceRetentionSettingsRequest(const PutAppInstanceRetentionSettingsRequest &other);
    PutAppInstanceRetentionSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAppInstanceRetentionSettingsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
