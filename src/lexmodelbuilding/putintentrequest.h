// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINTENTREQUEST_H
#define QTAWS_PUTINTENTREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class PutIntentRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT PutIntentRequest : public LexModelBuildingRequest {

public:
    PutIntentRequest(const PutIntentRequest &other);
    PutIntentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutIntentRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
