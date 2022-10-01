// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXTERNALDATAVIEWACCESSDETAILSRESPONSE_H
#define QTAWS_GETEXTERNALDATAVIEWACCESSDETAILSRESPONSE_H

#include "finspacedataresponse.h"
#include "getexternaldataviewaccessdetailsrequest.h"

namespace QtAws {
namespace FinspaceData {

class GetExternalDataViewAccessDetailsResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT GetExternalDataViewAccessDetailsResponse : public FinspaceDataResponse {
    Q_OBJECT

public:
    GetExternalDataViewAccessDetailsResponse(const GetExternalDataViewAccessDetailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetExternalDataViewAccessDetailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExternalDataViewAccessDetailsResponse)
    Q_DISABLE_COPY(GetExternalDataViewAccessDetailsResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
