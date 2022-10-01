// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPIKEYSRESPONSE_H
#define QTAWS_LISTAPIKEYSRESPONSE_H

#include "appsyncresponse.h"
#include "listapikeysrequest.h"

namespace QtAws {
namespace AppSync {

class ListApiKeysResponsePrivate;

class QTAWSAPPSYNC_EXPORT ListApiKeysResponse : public AppSyncResponse {
    Q_OBJECT

public:
    ListApiKeysResponse(const ListApiKeysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListApiKeysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApiKeysResponse)
    Q_DISABLE_COPY(ListApiKeysResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
