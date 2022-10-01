// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBOTREQUEST_H
#define QTAWS_PUTBOTREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class PutBotRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT PutBotRequest : public LexModelBuildingRequest {

public:
    PutBotRequest(const PutBotRequest &other);
    PutBotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBotRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
