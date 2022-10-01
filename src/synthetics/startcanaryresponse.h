// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCANARYRESPONSE_H
#define QTAWS_STARTCANARYRESPONSE_H

#include "syntheticsresponse.h"
#include "startcanaryrequest.h"

namespace QtAws {
namespace Synthetics {

class StartCanaryResponsePrivate;

class QTAWSSYNTHETICS_EXPORT StartCanaryResponse : public SyntheticsResponse {
    Q_OBJECT

public:
    StartCanaryResponse(const StartCanaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartCanaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartCanaryResponse)
    Q_DISABLE_COPY(StartCanaryResponse)

};

} // namespace Synthetics
} // namespace QtAws

#endif
