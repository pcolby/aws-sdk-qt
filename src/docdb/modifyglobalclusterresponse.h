// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYGLOBALCLUSTERRESPONSE_H
#define QTAWS_MODIFYGLOBALCLUSTERRESPONSE_H

#include "docdbresponse.h"
#include "modifyglobalclusterrequest.h"

namespace QtAws {
namespace DocDb {

class ModifyGlobalClusterResponsePrivate;

class QTAWSDOCDB_EXPORT ModifyGlobalClusterResponse : public DocDbResponse {
    Q_OBJECT

public:
    ModifyGlobalClusterResponse(const ModifyGlobalClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyGlobalClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyGlobalClusterResponse)
    Q_DISABLE_COPY(ModifyGlobalClusterResponse)

};

} // namespace DocDb
} // namespace QtAws

#endif
