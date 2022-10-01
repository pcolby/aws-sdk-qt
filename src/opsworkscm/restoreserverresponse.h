// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORESERVERRESPONSE_H
#define QTAWS_RESTORESERVERRESPONSE_H

#include "opsworkscmresponse.h"
#include "restoreserverrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class RestoreServerResponsePrivate;

class QTAWSOPSWORKSCM_EXPORT RestoreServerResponse : public OpsWorksCmResponse {
    Q_OBJECT

public:
    RestoreServerResponse(const RestoreServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreServerResponse)
    Q_DISABLE_COPY(RestoreServerResponse)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
