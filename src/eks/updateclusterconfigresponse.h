// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERCONFIGRESPONSE_H
#define QTAWS_UPDATECLUSTERCONFIGRESPONSE_H

#include "eksresponse.h"
#include "updateclusterconfigrequest.h"

namespace QtAws {
namespace Eks {

class UpdateClusterConfigResponsePrivate;

class QTAWSEKS_EXPORT UpdateClusterConfigResponse : public EksResponse {
    Q_OBJECT

public:
    UpdateClusterConfigResponse(const UpdateClusterConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateClusterConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateClusterConfigResponse)
    Q_DISABLE_COPY(UpdateClusterConfigResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
