// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYSPACERESPONSE_H
#define QTAWS_CREATEKEYSPACERESPONSE_H

#include "keyspacesresponse.h"
#include "createkeyspacerequest.h"

namespace QtAws {
namespace Keyspaces {

class CreateKeyspaceResponsePrivate;

class QTAWSKEYSPACES_EXPORT CreateKeyspaceResponse : public KeyspacesResponse {
    Q_OBJECT

public:
    CreateKeyspaceResponse(const CreateKeyspaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateKeyspaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateKeyspaceResponse)
    Q_DISABLE_COPY(CreateKeyspaceResponse)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
