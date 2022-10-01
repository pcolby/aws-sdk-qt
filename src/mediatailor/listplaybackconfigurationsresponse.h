// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLAYBACKCONFIGURATIONSRESPONSE_H
#define QTAWS_LISTPLAYBACKCONFIGURATIONSRESPONSE_H

#include "mediatailorresponse.h"
#include "listplaybackconfigurationsrequest.h"

namespace QtAws {
namespace MediaTailor {

class ListPlaybackConfigurationsResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT ListPlaybackConfigurationsResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    ListPlaybackConfigurationsResponse(const ListPlaybackConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPlaybackConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPlaybackConfigurationsResponse)
    Q_DISABLE_COPY(ListPlaybackConfigurationsResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
