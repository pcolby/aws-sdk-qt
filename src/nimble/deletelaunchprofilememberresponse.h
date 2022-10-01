// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHPROFILEMEMBERRESPONSE_H
#define QTAWS_DELETELAUNCHPROFILEMEMBERRESPONSE_H

#include "nimbleresponse.h"
#include "deletelaunchprofilememberrequest.h"

namespace QtAws {
namespace Nimble {

class DeleteLaunchProfileMemberResponsePrivate;

class QTAWSNIMBLE_EXPORT DeleteLaunchProfileMemberResponse : public NimbleResponse {
    Q_OBJECT

public:
    DeleteLaunchProfileMemberResponse(const DeleteLaunchProfileMemberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLaunchProfileMemberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLaunchProfileMemberResponse)
    Q_DISABLE_COPY(DeleteLaunchProfileMemberResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
