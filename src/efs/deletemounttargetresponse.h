// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMOUNTTARGETRESPONSE_H
#define QTAWS_DELETEMOUNTTARGETRESPONSE_H

#include "efsresponse.h"
#include "deletemounttargetrequest.h"

namespace QtAws {
namespace Efs {

class DeleteMountTargetResponsePrivate;

class QTAWSEFS_EXPORT DeleteMountTargetResponse : public EfsResponse {
    Q_OBJECT

public:
    DeleteMountTargetResponse(const DeleteMountTargetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMountTargetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMountTargetResponse)
    Q_DISABLE_COPY(DeleteMountTargetResponse)

};

} // namespace Efs
} // namespace QtAws

#endif
