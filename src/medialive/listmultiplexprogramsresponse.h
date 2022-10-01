// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTIPLEXPROGRAMSRESPONSE_H
#define QTAWS_LISTMULTIPLEXPROGRAMSRESPONSE_H

#include "medialiveresponse.h"
#include "listmultiplexprogramsrequest.h"

namespace QtAws {
namespace MediaLive {

class ListMultiplexProgramsResponsePrivate;

class QTAWSMEDIALIVE_EXPORT ListMultiplexProgramsResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    ListMultiplexProgramsResponse(const ListMultiplexProgramsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMultiplexProgramsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMultiplexProgramsResponse)
    Q_DISABLE_COPY(ListMultiplexProgramsResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
