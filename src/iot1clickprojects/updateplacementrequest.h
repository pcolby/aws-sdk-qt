// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPLACEMENTREQUEST_H
#define QTAWS_UPDATEPLACEMENTREQUEST_H

#include "iot1clickprojectsrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class UpdatePlacementRequestPrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT UpdatePlacementRequest : public IoT1ClickProjectsRequest {

public:
    UpdatePlacementRequest(const UpdatePlacementRequest &other);
    UpdatePlacementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePlacementRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
