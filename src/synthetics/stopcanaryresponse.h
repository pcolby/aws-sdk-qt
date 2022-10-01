// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCANARYRESPONSE_H
#define QTAWS_STOPCANARYRESPONSE_H

#include "syntheticsresponse.h"
#include "stopcanaryrequest.h"

namespace QtAws {
namespace Synthetics {

class StopCanaryResponsePrivate;

class QTAWSSYNTHETICS_EXPORT StopCanaryResponse : public SyntheticsResponse {
    Q_OBJECT

public:
    StopCanaryResponse(const StopCanaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopCanaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopCanaryResponse)
    Q_DISABLE_COPY(StopCanaryResponse)

};

} // namespace Synthetics
} // namespace QtAws

#endif
