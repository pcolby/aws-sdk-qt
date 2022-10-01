// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRETENTIONSETTINGSRESPONSE_H
#define QTAWS_PUTRETENTIONSETTINGSRESPONSE_H

#include "chimeresponse.h"
#include "putretentionsettingsrequest.h"

namespace QtAws {
namespace Chime {

class PutRetentionSettingsResponsePrivate;

class QTAWSCHIME_EXPORT PutRetentionSettingsResponse : public ChimeResponse {
    Q_OBJECT

public:
    PutRetentionSettingsResponse(const PutRetentionSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRetentionSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRetentionSettingsResponse)
    Q_DISABLE_COPY(PutRetentionSettingsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
