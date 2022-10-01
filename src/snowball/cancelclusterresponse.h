// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCLUSTERRESPONSE_H
#define QTAWS_CANCELCLUSTERRESPONSE_H

#include "snowballresponse.h"
#include "cancelclusterrequest.h"

namespace QtAws {
namespace Snowball {

class CancelClusterResponsePrivate;

class QTAWSSNOWBALL_EXPORT CancelClusterResponse : public SnowballResponse {
    Q_OBJECT

public:
    CancelClusterResponse(const CancelClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelClusterResponse)
    Q_DISABLE_COPY(CancelClusterResponse)

};

} // namespace Snowball
} // namespace QtAws

#endif
