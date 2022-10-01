// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICELINKEDROLEDELETIONSTATUSRESPONSE_H
#define QTAWS_GETSERVICELINKEDROLEDELETIONSTATUSRESPONSE_H

#include "iamresponse.h"
#include "getservicelinkedroledeletionstatusrequest.h"

namespace QtAws {
namespace Iam {

class GetServiceLinkedRoleDeletionStatusResponsePrivate;

class QTAWSIAM_EXPORT GetServiceLinkedRoleDeletionStatusResponse : public IamResponse {
    Q_OBJECT

public:
    GetServiceLinkedRoleDeletionStatusResponse(const GetServiceLinkedRoleDeletionStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetServiceLinkedRoleDeletionStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceLinkedRoleDeletionStatusResponse)
    Q_DISABLE_COPY(GetServiceLinkedRoleDeletionStatusResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
