// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTENTREQUEST_H
#define QTAWS_GETINTENTREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetIntentRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetIntentRequest : public LexModelBuildingRequest {

public:
    GetIntentRequest(const GetIntentRequest &other);
    GetIntentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIntentRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
