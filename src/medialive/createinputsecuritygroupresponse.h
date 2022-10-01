// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINPUTSECURITYGROUPRESPONSE_H
#define QTAWS_CREATEINPUTSECURITYGROUPRESPONSE_H

#include "medialiveresponse.h"
#include "createinputsecuritygrouprequest.h"

namespace QtAws {
namespace MediaLive {

class CreateInputSecurityGroupResponsePrivate;

class QTAWSMEDIALIVE_EXPORT CreateInputSecurityGroupResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    CreateInputSecurityGroupResponse(const CreateInputSecurityGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateInputSecurityGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInputSecurityGroupResponse)
    Q_DISABLE_COPY(CreateInputSecurityGroupResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
