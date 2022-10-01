// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDIMENSIONKEYDETAILSRESPONSE_H
#define QTAWS_GETDIMENSIONKEYDETAILSRESPONSE_H

#include "piresponse.h"
#include "getdimensionkeydetailsrequest.h"

namespace QtAws {
namespace Pi {

class GetDimensionKeyDetailsResponsePrivate;

class QTAWSPI_EXPORT GetDimensionKeyDetailsResponse : public PiResponse {
    Q_OBJECT

public:
    GetDimensionKeyDetailsResponse(const GetDimensionKeyDetailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDimensionKeyDetailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDimensionKeyDetailsResponse)
    Q_DISABLE_COPY(GetDimensionKeyDetailsResponse)

};

} // namespace Pi
} // namespace QtAws

#endif
