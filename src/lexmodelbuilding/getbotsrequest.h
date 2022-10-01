// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTSREQUEST_H
#define QTAWS_GETBOTSREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotsRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetBotsRequest : public LexModelBuildingRequest {

public:
    GetBotsRequest(const GetBotsRequest &other);
    GetBotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBotsRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
