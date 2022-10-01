// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERRESPONSE_H
#define QTAWS_UPDATECLUSTERRESPONSE_H

#include "snowballresponse.h"
#include "updateclusterrequest.h"

namespace QtAws {
namespace Snowball {

class UpdateClusterResponsePrivate;

class QTAWSSNOWBALL_EXPORT UpdateClusterResponse : public SnowballResponse {
    Q_OBJECT

public:
    UpdateClusterResponse(const UpdateClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateClusterResponse)
    Q_DISABLE_COPY(UpdateClusterResponse)

};

} // namespace Snowball
} // namespace QtAws

#endif
