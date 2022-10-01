// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLAYBACKKEYPAIRRESPONSE_H
#define QTAWS_DELETEPLAYBACKKEYPAIRRESPONSE_H

#include "ivsresponse.h"
#include "deleteplaybackkeypairrequest.h"

namespace QtAws {
namespace Ivs {

class DeletePlaybackKeyPairResponsePrivate;

class QTAWSIVS_EXPORT DeletePlaybackKeyPairResponse : public IvsResponse {
    Q_OBJECT

public:
    DeletePlaybackKeyPairResponse(const DeletePlaybackKeyPairRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePlaybackKeyPairRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePlaybackKeyPairResponse)
    Q_DISABLE_COPY(DeletePlaybackKeyPairResponse)

};

} // namespace Ivs
} // namespace QtAws

#endif
