// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENODEGROUPCONFIGRESPONSE_H
#define QTAWS_UPDATENODEGROUPCONFIGRESPONSE_H

#include "eksresponse.h"
#include "updatenodegroupconfigrequest.h"

namespace QtAws {
namespace Eks {

class UpdateNodegroupConfigResponsePrivate;

class QTAWSEKS_EXPORT UpdateNodegroupConfigResponse : public EksResponse {
    Q_OBJECT

public:
    UpdateNodegroupConfigResponse(const UpdateNodegroupConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateNodegroupConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNodegroupConfigResponse)
    Q_DISABLE_COPY(UpdateNodegroupConfigResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
