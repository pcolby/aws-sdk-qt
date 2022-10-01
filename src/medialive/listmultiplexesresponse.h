// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTIPLEXESRESPONSE_H
#define QTAWS_LISTMULTIPLEXESRESPONSE_H

#include "medialiveresponse.h"
#include "listmultiplexesrequest.h"

namespace QtAws {
namespace MediaLive {

class ListMultiplexesResponsePrivate;

class QTAWSMEDIALIVE_EXPORT ListMultiplexesResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    ListMultiplexesResponse(const ListMultiplexesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMultiplexesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMultiplexesResponse)
    Q_DISABLE_COPY(ListMultiplexesResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
