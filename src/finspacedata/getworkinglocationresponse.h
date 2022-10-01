// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKINGLOCATIONRESPONSE_H
#define QTAWS_GETWORKINGLOCATIONRESPONSE_H

#include "finspacedataresponse.h"
#include "getworkinglocationrequest.h"

namespace QtAws {
namespace FinspaceData {

class GetWorkingLocationResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT GetWorkingLocationResponse : public FinspaceDataResponse {
    Q_OBJECT

public:
    GetWorkingLocationResponse(const GetWorkingLocationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWorkingLocationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkingLocationResponse)
    Q_DISABLE_COPY(GetWorkingLocationResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
