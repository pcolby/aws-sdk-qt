// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPLACEMENTRESPONSE_H
#define QTAWS_UPDATEPLACEMENTRESPONSE_H

#include "iot1clickprojectsresponse.h"
#include "updateplacementrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class UpdatePlacementResponsePrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT UpdatePlacementResponse : public IoT1ClickProjectsResponse {
    Q_OBJECT

public:
    UpdatePlacementResponse(const UpdatePlacementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePlacementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePlacementResponse)
    Q_DISABLE_COPY(UpdatePlacementResponse)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
