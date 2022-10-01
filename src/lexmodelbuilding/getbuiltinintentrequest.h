// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUILTININTENTREQUEST_H
#define QTAWS_GETBUILTININTENTREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBuiltinIntentRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetBuiltinIntentRequest : public LexModelBuildingRequest {

public:
    GetBuiltinIntentRequest(const GetBuiltinIntentRequest &other);
    GetBuiltinIntentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBuiltinIntentRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
