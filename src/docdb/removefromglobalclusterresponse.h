// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFROMGLOBALCLUSTERRESPONSE_H
#define QTAWS_REMOVEFROMGLOBALCLUSTERRESPONSE_H

#include "docdbresponse.h"
#include "removefromglobalclusterrequest.h"

namespace QtAws {
namespace DocDb {

class RemoveFromGlobalClusterResponsePrivate;

class QTAWSDOCDB_EXPORT RemoveFromGlobalClusterResponse : public DocDbResponse {
    Q_OBJECT

public:
    RemoveFromGlobalClusterResponse(const RemoveFromGlobalClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveFromGlobalClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveFromGlobalClusterResponse)
    Q_DISABLE_COPY(RemoveFromGlobalClusterResponse)

};

} // namespace DocDb
} // namespace QtAws

#endif
