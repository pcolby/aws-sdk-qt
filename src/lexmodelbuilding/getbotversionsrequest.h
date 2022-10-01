// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTVERSIONSREQUEST_H
#define QTAWS_GETBOTVERSIONSREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotVersionsRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetBotVersionsRequest : public LexModelBuildingRequest {

public:
    GetBotVersionsRequest(const GetBotVersionsRequest &other);
    GetBotVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBotVersionsRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
