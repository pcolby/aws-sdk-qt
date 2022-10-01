// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORLDSREQUEST_H
#define QTAWS_LISTWORLDSREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListWorldsRequestPrivate;

class QTAWSROBOMAKER_EXPORT ListWorldsRequest : public RoboMakerRequest {

public:
    ListWorldsRequest(const ListWorldsRequest &other);
    ListWorldsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorldsRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
