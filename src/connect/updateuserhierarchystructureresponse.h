// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERHIERARCHYSTRUCTURERESPONSE_H
#define QTAWS_UPDATEUSERHIERARCHYSTRUCTURERESPONSE_H

#include "connectresponse.h"
#include "updateuserhierarchystructurerequest.h"

namespace QtAws {
namespace Connect {

class UpdateUserHierarchyStructureResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateUserHierarchyStructureResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateUserHierarchyStructureResponse(const UpdateUserHierarchyStructureRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateUserHierarchyStructureRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserHierarchyStructureResponse)
    Q_DISABLE_COPY(UpdateUserHierarchyStructureResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
