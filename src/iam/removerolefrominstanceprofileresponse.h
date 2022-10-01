// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEROLEFROMINSTANCEPROFILERESPONSE_H
#define QTAWS_REMOVEROLEFROMINSTANCEPROFILERESPONSE_H

#include "iamresponse.h"
#include "removerolefrominstanceprofilerequest.h"

namespace QtAws {
namespace Iam {

class RemoveRoleFromInstanceProfileResponsePrivate;

class QTAWSIAM_EXPORT RemoveRoleFromInstanceProfileResponse : public IamResponse {
    Q_OBJECT

public:
    RemoveRoleFromInstanceProfileResponse(const RemoveRoleFromInstanceProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveRoleFromInstanceProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveRoleFromInstanceProfileResponse)
    Q_DISABLE_COPY(RemoveRoleFromInstanceProfileResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
