// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERRESOURCERESPONSE_H
#define QTAWS_DEREGISTERRESOURCERESPONSE_H

#include "lakeformationresponse.h"
#include "deregisterresourcerequest.h"

namespace QtAws {
namespace LakeFormation {

class DeregisterResourceResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT DeregisterResourceResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    DeregisterResourceResponse(const DeregisterResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterResourceResponse)
    Q_DISABLE_COPY(DeregisterResourceResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
