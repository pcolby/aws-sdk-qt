// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPINSTANCERETENTIONSETTINGSRESPONSE_H
#define QTAWS_PUTAPPINSTANCERETENTIONSETTINGSRESPONSE_H

#include "chimeresponse.h"
#include "putappinstanceretentionsettingsrequest.h"

namespace QtAws {
namespace Chime {

class PutAppInstanceRetentionSettingsResponsePrivate;

class QTAWSCHIME_EXPORT PutAppInstanceRetentionSettingsResponse : public ChimeResponse {
    Q_OBJECT

public:
    PutAppInstanceRetentionSettingsResponse(const PutAppInstanceRetentionSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAppInstanceRetentionSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAppInstanceRetentionSettingsResponse)
    Q_DISABLE_COPY(PutAppInstanceRetentionSettingsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
