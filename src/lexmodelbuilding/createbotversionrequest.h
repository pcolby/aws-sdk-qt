// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBOTVERSIONREQUEST_H
#define QTAWS_CREATEBOTVERSIONREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class CreateBotVersionRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT CreateBotVersionRequest : public LexModelBuildingRequest {

public:
    CreateBotVersionRequest(const CreateBotVersionRequest &other);
    CreateBotVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBotVersionRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
