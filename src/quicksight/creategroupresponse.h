// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGROUPRESPONSE_H
#define QTAWS_CREATEGROUPRESPONSE_H

#include "quicksightresponse.h"
#include "creategrouprequest.h"

namespace QtAws {
namespace QuickSight {

class CreateGroupResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT CreateGroupResponse : public QuickSightResponse {
    Q_OBJECT

public:
    CreateGroupResponse(const CreateGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGroupResponse)
    Q_DISABLE_COPY(CreateGroupResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
