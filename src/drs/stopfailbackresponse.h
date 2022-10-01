// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPFAILBACKRESPONSE_H
#define QTAWS_STOPFAILBACKRESPONSE_H

#include "drsresponse.h"
#include "stopfailbackrequest.h"

namespace QtAws {
namespace Drs {

class StopFailbackResponsePrivate;

class QTAWSDRS_EXPORT StopFailbackResponse : public DrsResponse {
    Q_OBJECT

public:
    StopFailbackResponse(const StopFailbackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopFailbackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopFailbackResponse)
    Q_DISABLE_COPY(StopFailbackResponse)

};

} // namespace Drs
} // namespace QtAws

#endif
