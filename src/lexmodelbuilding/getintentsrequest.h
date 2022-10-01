// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTENTSREQUEST_H
#define QTAWS_GETINTENTSREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetIntentsRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetIntentsRequest : public LexModelBuildingRequest {

public:
    GetIntentsRequest(const GetIntentsRequest &other);
    GetIntentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIntentsRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
