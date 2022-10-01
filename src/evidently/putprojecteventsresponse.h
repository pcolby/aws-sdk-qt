// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROJECTEVENTSRESPONSE_H
#define QTAWS_PUTPROJECTEVENTSRESPONSE_H

#include "evidentlyresponse.h"
#include "putprojecteventsrequest.h"

namespace QtAws {
namespace Evidently {

class PutProjectEventsResponsePrivate;

class QTAWSEVIDENTLY_EXPORT PutProjectEventsResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    PutProjectEventsResponse(const PutProjectEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutProjectEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutProjectEventsResponse)
    Q_DISABLE_COPY(PutProjectEventsResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
