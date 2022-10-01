// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUILTININTENTSREQUEST_H
#define QTAWS_GETBUILTININTENTSREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBuiltinIntentsRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetBuiltinIntentsRequest : public LexModelBuildingRequest {

public:
    GetBuiltinIntentsRequest(const GetBuiltinIntentsRequest &other);
    GetBuiltinIntentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBuiltinIntentsRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
