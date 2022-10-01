// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXTENSIONVERSIONRESPONSE_H
#define QTAWS_GETEXTENSIONVERSIONRESPONSE_H

#include "gamesparksresponse.h"
#include "getextensionversionrequest.h"

namespace QtAws {
namespace GameSparks {

class GetExtensionVersionResponsePrivate;

class QTAWSGAMESPARKS_EXPORT GetExtensionVersionResponse : public GameSparksResponse {
    Q_OBJECT

public:
    GetExtensionVersionResponse(const GetExtensionVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetExtensionVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExtensionVersionResponse)
    Q_DISABLE_COPY(GetExtensionVersionResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
