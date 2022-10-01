// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLACEMENTREQUEST_H
#define QTAWS_CREATEPLACEMENTREQUEST_H

#include "iot1clickprojectsrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class CreatePlacementRequestPrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT CreatePlacementRequest : public IoT1ClickProjectsRequest {

public:
    CreatePlacementRequest(const CreatePlacementRequest &other);
    CreatePlacementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePlacementRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
