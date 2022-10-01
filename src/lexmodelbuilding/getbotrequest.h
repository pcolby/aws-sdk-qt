// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTREQUEST_H
#define QTAWS_GETBOTREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetBotRequest : public LexModelBuildingRequest {

public:
    GetBotRequest(const GetBotRequest &other);
    GetBotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBotRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
