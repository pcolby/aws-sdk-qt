// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAVIEWRESPONSE_H
#define QTAWS_GETDATAVIEWRESPONSE_H

#include "finspacedataresponse.h"
#include "getdataviewrequest.h"

namespace QtAws {
namespace FinspaceData {

class GetDataViewResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT GetDataViewResponse : public FinspaceDataResponse {
    Q_OBJECT

public:
    GetDataViewResponse(const GetDataViewRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDataViewRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataViewResponse)
    Q_DISABLE_COPY(GetDataViewResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
