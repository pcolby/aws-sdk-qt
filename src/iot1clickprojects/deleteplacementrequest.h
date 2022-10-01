// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLACEMENTREQUEST_H
#define QTAWS_DELETEPLACEMENTREQUEST_H

#include "iot1clickprojectsrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class DeletePlacementRequestPrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT DeletePlacementRequest : public IoT1ClickProjectsRequest {

public:
    DeletePlacementRequest(const DeletePlacementRequest &other);
    DeletePlacementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePlacementRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
