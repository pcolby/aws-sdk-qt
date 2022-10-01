// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGLOBALCLUSTERRESPONSE_H
#define QTAWS_DELETEGLOBALCLUSTERRESPONSE_H

#include "neptuneresponse.h"
#include "deleteglobalclusterrequest.h"

namespace QtAws {
namespace Neptune {

class DeleteGlobalClusterResponsePrivate;

class QTAWSNEPTUNE_EXPORT DeleteGlobalClusterResponse : public NeptuneResponse {
    Q_OBJECT

public:
    DeleteGlobalClusterResponse(const DeleteGlobalClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteGlobalClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGlobalClusterResponse)
    Q_DISABLE_COPY(DeleteGlobalClusterResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
