// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTREAMRESPONSE_H
#define QTAWS_STOPSTREAMRESPONSE_H

#include "ivsresponse.h"
#include "stopstreamrequest.h"

namespace QtAws {
namespace Ivs {

class StopStreamResponsePrivate;

class QTAWSIVS_EXPORT StopStreamResponse : public IvsResponse {
    Q_OBJECT

public:
    StopStreamResponse(const StopStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopStreamResponse)
    Q_DISABLE_COPY(StopStreamResponse)

};

} // namespace Ivs
} // namespace QtAws

#endif
