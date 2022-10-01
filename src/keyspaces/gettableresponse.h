// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLERESPONSE_H
#define QTAWS_GETTABLERESPONSE_H

#include "keyspacesresponse.h"
#include "gettablerequest.h"

namespace QtAws {
namespace Keyspaces {

class GetTableResponsePrivate;

class QTAWSKEYSPACES_EXPORT GetTableResponse : public KeyspacesResponse {
    Q_OBJECT

public:
    GetTableResponse(const GetTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTableResponse)
    Q_DISABLE_COPY(GetTableResponse)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
