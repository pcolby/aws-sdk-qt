// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCANARYRESPONSE_H
#define QTAWS_GETCANARYRESPONSE_H

#include "syntheticsresponse.h"
#include "getcanaryrequest.h"

namespace QtAws {
namespace Synthetics {

class GetCanaryResponsePrivate;

class QTAWSSYNTHETICS_EXPORT GetCanaryResponse : public SyntheticsResponse {
    Q_OBJECT

public:
    GetCanaryResponse(const GetCanaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCanaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCanaryResponse)
    Q_DISABLE_COPY(GetCanaryResponse)

};

} // namespace Synthetics
} // namespace QtAws

#endif
