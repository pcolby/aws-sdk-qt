// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICELASTACCESSEDDETAILSWITHENTITIESRESPONSE_H
#define QTAWS_GETSERVICELASTACCESSEDDETAILSWITHENTITIESRESPONSE_H

#include "iamresponse.h"
#include "getservicelastaccesseddetailswithentitiesrequest.h"

namespace QtAws {
namespace Iam {

class GetServiceLastAccessedDetailsWithEntitiesResponsePrivate;

class QTAWSIAM_EXPORT GetServiceLastAccessedDetailsWithEntitiesResponse : public IamResponse {
    Q_OBJECT

public:
    GetServiceLastAccessedDetailsWithEntitiesResponse(const GetServiceLastAccessedDetailsWithEntitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetServiceLastAccessedDetailsWithEntitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceLastAccessedDetailsWithEntitiesResponse)
    Q_DISABLE_COPY(GetServiceLastAccessedDetailsWithEntitiesResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
