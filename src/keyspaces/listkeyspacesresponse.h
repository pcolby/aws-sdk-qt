// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYSPACESRESPONSE_H
#define QTAWS_LISTKEYSPACESRESPONSE_H

#include "keyspacesresponse.h"
#include "listkeyspacesrequest.h"

namespace QtAws {
namespace Keyspaces {

class ListKeyspacesResponsePrivate;

class QTAWSKEYSPACES_EXPORT ListKeyspacesResponse : public KeyspacesResponse {
    Q_OBJECT

public:
    ListKeyspacesResponse(const ListKeyspacesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListKeyspacesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListKeyspacesResponse)
    Q_DISABLE_COPY(ListKeyspacesResponse)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
