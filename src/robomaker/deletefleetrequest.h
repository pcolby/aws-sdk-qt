// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETREQUEST_H
#define QTAWS_DELETEFLEETREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class DeleteFleetRequestPrivate;

class QTAWSROBOMAKER_EXPORT DeleteFleetRequest : public RoboMakerRequest {

public:
    DeleteFleetRequest(const DeleteFleetRequest &other);
    DeleteFleetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFleetRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
