// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTKEYPAIRRESPONSE_H
#define QTAWS_IMPORTKEYPAIRRESPONSE_H

#include "lightsailresponse.h"
#include "importkeypairrequest.h"

namespace QtAws {
namespace Lightsail {

class ImportKeyPairResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT ImportKeyPairResponse : public LightsailResponse {
    Q_OBJECT

public:
    ImportKeyPairResponse(const ImportKeyPairRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportKeyPairRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportKeyPairResponse)
    Q_DISABLE_COPY(ImportKeyPairResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
