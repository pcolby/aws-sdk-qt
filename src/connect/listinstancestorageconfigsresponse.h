// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCESTORAGECONFIGSRESPONSE_H
#define QTAWS_LISTINSTANCESTORAGECONFIGSRESPONSE_H

#include "connectresponse.h"
#include "listinstancestorageconfigsrequest.h"

namespace QtAws {
namespace Connect {

class ListInstanceStorageConfigsResponsePrivate;

class QTAWSCONNECT_EXPORT ListInstanceStorageConfigsResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListInstanceStorageConfigsResponse(const ListInstanceStorageConfigsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInstanceStorageConfigsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInstanceStorageConfigsResponse)
    Q_DISABLE_COPY(ListInstanceStorageConfigsResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
