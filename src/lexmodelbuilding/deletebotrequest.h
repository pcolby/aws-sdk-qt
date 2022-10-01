// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTREQUEST_H
#define QTAWS_DELETEBOTREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteBotRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT DeleteBotRequest : public LexModelBuildingRequest {

public:
    DeleteBotRequest(const DeleteBotRequest &other);
    DeleteBotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBotRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
