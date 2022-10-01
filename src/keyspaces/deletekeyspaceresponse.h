// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKEYSPACERESPONSE_H
#define QTAWS_DELETEKEYSPACERESPONSE_H

#include "keyspacesresponse.h"
#include "deletekeyspacerequest.h"

namespace QtAws {
namespace Keyspaces {

class DeleteKeyspaceResponsePrivate;

class QTAWSKEYSPACES_EXPORT DeleteKeyspaceResponse : public KeyspacesResponse {
    Q_OBJECT

public:
    DeleteKeyspaceResponse(const DeleteKeyspaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteKeyspaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteKeyspaceResponse)
    Q_DISABLE_COPY(DeleteKeyspaceResponse)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
