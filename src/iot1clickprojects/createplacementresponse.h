// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLACEMENTRESPONSE_H
#define QTAWS_CREATEPLACEMENTRESPONSE_H

#include "iot1clickprojectsresponse.h"
#include "createplacementrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class CreatePlacementResponsePrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT CreatePlacementResponse : public IoT1ClickProjectsResponse {
    Q_OBJECT

public:
    CreatePlacementResponse(const CreatePlacementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePlacementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePlacementResponse)
    Q_DISABLE_COPY(CreatePlacementResponse)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
