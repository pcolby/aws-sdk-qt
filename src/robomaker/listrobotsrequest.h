// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROBOTSREQUEST_H
#define QTAWS_LISTROBOTSREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListRobotsRequestPrivate;

class QTAWSROBOMAKER_EXPORT ListRobotsRequest : public RoboMakerRequest {

public:
    ListRobotsRequest(const ListRobotsRequest &other);
    ListRobotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRobotsRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
