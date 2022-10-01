// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROTOCOLSLISTRESPONSE_H
#define QTAWS_PUTPROTOCOLSLISTRESPONSE_H

#include "fmsresponse.h"
#include "putprotocolslistrequest.h"

namespace QtAws {
namespace Fms {

class PutProtocolsListResponsePrivate;

class QTAWSFMS_EXPORT PutProtocolsListResponse : public FmsResponse {
    Q_OBJECT

public:
    PutProtocolsListResponse(const PutProtocolsListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutProtocolsListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutProtocolsListResponse)
    Q_DISABLE_COPY(PutProtocolsListResponse)

};

} // namespace Fms
} // namespace QtAws

#endif
