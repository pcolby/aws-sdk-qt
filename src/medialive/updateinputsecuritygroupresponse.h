// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINPUTSECURITYGROUPRESPONSE_H
#define QTAWS_UPDATEINPUTSECURITYGROUPRESPONSE_H

#include "medialiveresponse.h"
#include "updateinputsecuritygrouprequest.h"

namespace QtAws {
namespace MediaLive {

class UpdateInputSecurityGroupResponsePrivate;

class QTAWSMEDIALIVE_EXPORT UpdateInputSecurityGroupResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    UpdateInputSecurityGroupResponse(const UpdateInputSecurityGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateInputSecurityGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInputSecurityGroupResponse)
    Q_DISABLE_COPY(UpdateInputSecurityGroupResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
