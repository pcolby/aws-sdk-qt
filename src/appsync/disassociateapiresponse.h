// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEAPIRESPONSE_H
#define QTAWS_DISASSOCIATEAPIRESPONSE_H

#include "appsyncresponse.h"
#include "disassociateapirequest.h"

namespace QtAws {
namespace AppSync {

class DisassociateApiResponsePrivate;

class QTAWSAPPSYNC_EXPORT DisassociateApiResponse : public AppSyncResponse {
    Q_OBJECT

public:
    DisassociateApiResponse(const DisassociateApiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateApiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateApiResponse)
    Q_DISABLE_COPY(DisassociateApiResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
