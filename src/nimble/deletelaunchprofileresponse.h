// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHPROFILERESPONSE_H
#define QTAWS_DELETELAUNCHPROFILERESPONSE_H

#include "nimbleresponse.h"
#include "deletelaunchprofilerequest.h"

namespace QtAws {
namespace Nimble {

class DeleteLaunchProfileResponsePrivate;

class QTAWSNIMBLE_EXPORT DeleteLaunchProfileResponse : public NimbleResponse {
    Q_OBJECT

public:
    DeleteLaunchProfileResponse(const DeleteLaunchProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLaunchProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLaunchProfileResponse)
    Q_DISABLE_COPY(DeleteLaunchProfileResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
