// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERRESPONSE_H
#define QTAWS_MODIFYDBCLUSTERRESPONSE_H

#include "docdbresponse.h"
#include "modifydbclusterrequest.h"

namespace QtAws {
namespace DocDb {

class ModifyDBClusterResponsePrivate;

class QTAWSDOCDB_EXPORT ModifyDBClusterResponse : public DocDbResponse {
    Q_OBJECT

public:
    ModifyDBClusterResponse(const ModifyDBClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyDBClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBClusterResponse)
    Q_DISABLE_COPY(ModifyDBClusterResponse)

};

} // namespace DocDb
} // namespace QtAws

#endif
