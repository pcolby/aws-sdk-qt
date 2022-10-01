// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUTTERANCESVIEWREQUEST_H
#define QTAWS_GETUTTERANCESVIEWREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetUtterancesViewRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetUtterancesViewRequest : public LexModelBuildingRequest {

public:
    GetUtterancesViewRequest(const GetUtterancesViewRequest &other);
    GetUtterancesViewRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUtterancesViewRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
