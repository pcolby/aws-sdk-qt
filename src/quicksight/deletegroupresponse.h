// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGROUPRESPONSE_H
#define QTAWS_DELETEGROUPRESPONSE_H

#include "quicksightresponse.h"
#include "deletegrouprequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteGroupResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DeleteGroupResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DeleteGroupResponse(const DeleteGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGroupResponse)
    Q_DISABLE_COPY(DeleteGroupResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
