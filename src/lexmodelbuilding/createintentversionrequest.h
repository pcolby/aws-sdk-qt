// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTENTVERSIONREQUEST_H
#define QTAWS_CREATEINTENTVERSIONREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class CreateIntentVersionRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT CreateIntentVersionRequest : public LexModelBuildingRequest {

public:
    CreateIntentVersionRequest(const CreateIntentVersionRequest &other);
    CreateIntentVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIntentVersionRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
