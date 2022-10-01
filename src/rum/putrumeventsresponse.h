// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRUMEVENTSRESPONSE_H
#define QTAWS_PUTRUMEVENTSRESPONSE_H

#include "rumresponse.h"
#include "putrumeventsrequest.h"

namespace QtAws {
namespace Rum {

class PutRumEventsResponsePrivate;

class QTAWSRUM_EXPORT PutRumEventsResponse : public RumResponse {
    Q_OBJECT

public:
    PutRumEventsResponse(const PutRumEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRumEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRumEventsResponse)
    Q_DISABLE_COPY(PutRumEventsResponse)

};

} // namespace Rum
} // namespace QtAws

#endif
