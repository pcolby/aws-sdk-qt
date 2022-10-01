// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLAYBACKKEYPAIRSRESPONSE_H
#define QTAWS_LISTPLAYBACKKEYPAIRSRESPONSE_H

#include "ivsresponse.h"
#include "listplaybackkeypairsrequest.h"

namespace QtAws {
namespace Ivs {

class ListPlaybackKeyPairsResponsePrivate;

class QTAWSIVS_EXPORT ListPlaybackKeyPairsResponse : public IvsResponse {
    Q_OBJECT

public:
    ListPlaybackKeyPairsResponse(const ListPlaybackKeyPairsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPlaybackKeyPairsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPlaybackKeyPairsResponse)
    Q_DISABLE_COPY(ListPlaybackKeyPairsResponse)

};

} // namespace Ivs
} // namespace QtAws

#endif
