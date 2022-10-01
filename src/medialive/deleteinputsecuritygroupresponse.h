// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINPUTSECURITYGROUPRESPONSE_H
#define QTAWS_DELETEINPUTSECURITYGROUPRESPONSE_H

#include "medialiveresponse.h"
#include "deleteinputsecuritygrouprequest.h"

namespace QtAws {
namespace MediaLive {

class DeleteInputSecurityGroupResponsePrivate;

class QTAWSMEDIALIVE_EXPORT DeleteInputSecurityGroupResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    DeleteInputSecurityGroupResponse(const DeleteInputSecurityGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteInputSecurityGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInputSecurityGroupResponse)
    Q_DISABLE_COPY(DeleteInputSecurityGroupResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
