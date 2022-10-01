// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRETENTIONSETTINGSRESPONSE_H
#define QTAWS_GETRETENTIONSETTINGSRESPONSE_H

#include "chimeresponse.h"
#include "getretentionsettingsrequest.h"

namespace QtAws {
namespace Chime {

class GetRetentionSettingsResponsePrivate;

class QTAWSCHIME_EXPORT GetRetentionSettingsResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetRetentionSettingsResponse(const GetRetentionSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRetentionSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRetentionSettingsResponse)
    Q_DISABLE_COPY(GetRetentionSettingsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
