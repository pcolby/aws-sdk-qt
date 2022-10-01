// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTPLAYBACKKEYPAIRRESPONSE_H
#define QTAWS_IMPORTPLAYBACKKEYPAIRRESPONSE_H

#include "ivsresponse.h"
#include "importplaybackkeypairrequest.h"

namespace QtAws {
namespace Ivs {

class ImportPlaybackKeyPairResponsePrivate;

class QTAWSIVS_EXPORT ImportPlaybackKeyPairResponse : public IvsResponse {
    Q_OBJECT

public:
    ImportPlaybackKeyPairResponse(const ImportPlaybackKeyPairRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportPlaybackKeyPairRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportPlaybackKeyPairResponse)
    Q_DISABLE_COPY(ImportPlaybackKeyPairResponse)

};

} // namespace Ivs
} // namespace QtAws

#endif
