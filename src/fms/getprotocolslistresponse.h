// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROTOCOLSLISTRESPONSE_H
#define QTAWS_GETPROTOCOLSLISTRESPONSE_H

#include "fmsresponse.h"
#include "getprotocolslistrequest.h"

namespace QtAws {
namespace Fms {

class GetProtocolsListResponsePrivate;

class QTAWSFMS_EXPORT GetProtocolsListResponse : public FmsResponse {
    Q_OBJECT

public:
    GetProtocolsListResponse(const GetProtocolsListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetProtocolsListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProtocolsListResponse)
    Q_DISABLE_COPY(GetProtocolsListResponse)

};

} // namespace Fms
} // namespace QtAws

#endif
