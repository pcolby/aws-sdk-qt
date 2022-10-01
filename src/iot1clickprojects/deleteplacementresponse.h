// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLACEMENTRESPONSE_H
#define QTAWS_DELETEPLACEMENTRESPONSE_H

#include "iot1clickprojectsresponse.h"
#include "deleteplacementrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class DeletePlacementResponsePrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT DeletePlacementResponse : public IoT1ClickProjectsResponse {
    Q_OBJECT

public:
    DeletePlacementResponse(const DeletePlacementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePlacementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePlacementResponse)
    Q_DISABLE_COPY(DeletePlacementResponse)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
