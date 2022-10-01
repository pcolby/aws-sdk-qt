// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAGSRESPONSE_H
#define QTAWS_DESCRIBELAGSRESPONSE_H

#include "directconnectresponse.h"
#include "describelagsrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeLagsResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeLagsResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DescribeLagsResponse(const DescribeLagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLagsResponse)
    Q_DISABLE_COPY(DescribeLagsResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
