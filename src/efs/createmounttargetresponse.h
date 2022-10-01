// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMOUNTTARGETRESPONSE_H
#define QTAWS_CREATEMOUNTTARGETRESPONSE_H

#include "efsresponse.h"
#include "createmounttargetrequest.h"

namespace QtAws {
namespace Efs {

class CreateMountTargetResponsePrivate;

class QTAWSEFS_EXPORT CreateMountTargetResponse : public EfsResponse {
    Q_OBJECT

public:
    CreateMountTargetResponse(const CreateMountTargetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMountTargetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMountTargetResponse)
    Q_DISABLE_COPY(CreateMountTargetResponse)

};

} // namespace Efs
} // namespace QtAws

#endif
