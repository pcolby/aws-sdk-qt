// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROTOCOLSLISTRESPONSE_H
#define QTAWS_DELETEPROTOCOLSLISTRESPONSE_H

#include "fmsresponse.h"
#include "deleteprotocolslistrequest.h"

namespace QtAws {
namespace Fms {

class DeleteProtocolsListResponsePrivate;

class QTAWSFMS_EXPORT DeleteProtocolsListResponse : public FmsResponse {
    Q_OBJECT

public:
    DeleteProtocolsListResponse(const DeleteProtocolsListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteProtocolsListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProtocolsListResponse)
    Q_DISABLE_COPY(DeleteProtocolsListResponse)

};

} // namespace Fms
} // namespace QtAws

#endif
