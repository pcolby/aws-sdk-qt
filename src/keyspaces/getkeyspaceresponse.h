// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYSPACERESPONSE_H
#define QTAWS_GETKEYSPACERESPONSE_H

#include "keyspacesresponse.h"
#include "getkeyspacerequest.h"

namespace QtAws {
namespace Keyspaces {

class GetKeyspaceResponsePrivate;

class QTAWSKEYSPACES_EXPORT GetKeyspaceResponse : public KeyspacesResponse {
    Q_OBJECT

public:
    GetKeyspaceResponse(const GetKeyspaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetKeyspaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetKeyspaceResponse)
    Q_DISABLE_COPY(GetKeyspaceResponse)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
