// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORETABLERESPONSE_H
#define QTAWS_RESTORETABLERESPONSE_H

#include "keyspacesresponse.h"
#include "restoretablerequest.h"

namespace QtAws {
namespace Keyspaces {

class RestoreTableResponsePrivate;

class QTAWSKEYSPACES_EXPORT RestoreTableResponse : public KeyspacesResponse {
    Q_OBJECT

public:
    RestoreTableResponse(const RestoreTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreTableResponse)
    Q_DISABLE_COPY(RestoreTableResponse)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
