// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERVERSIONRESPONSE_H
#define QTAWS_UPDATECLUSTERVERSIONRESPONSE_H

#include "eksresponse.h"
#include "updateclusterversionrequest.h"

namespace QtAws {
namespace Eks {

class UpdateClusterVersionResponsePrivate;

class QTAWSEKS_EXPORT UpdateClusterVersionResponse : public EksResponse {
    Q_OBJECT

public:
    UpdateClusterVersionResponse(const UpdateClusterVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateClusterVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateClusterVersionResponse)
    Q_DISABLE_COPY(UpdateClusterVersionResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
