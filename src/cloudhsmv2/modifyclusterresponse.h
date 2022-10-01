// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERRESPONSE_H
#define QTAWS_MODIFYCLUSTERRESPONSE_H

#include "cloudhsmv2response.h"
#include "modifyclusterrequest.h"

namespace QtAws {
namespace CloudHsmV2 {

class ModifyClusterResponsePrivate;

class QTAWSCLOUDHSMV2_EXPORT ModifyClusterResponse : public CloudHsmV2Response {
    Q_OBJECT

public:
    ModifyClusterResponse(const ModifyClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyClusterResponse)
    Q_DISABLE_COPY(ModifyClusterResponse)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
