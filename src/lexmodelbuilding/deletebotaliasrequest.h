// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTALIASREQUEST_H
#define QTAWS_DELETEBOTALIASREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteBotAliasRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT DeleteBotAliasRequest : public LexModelBuildingRequest {

public:
    DeleteBotAliasRequest(const DeleteBotAliasRequest &other);
    DeleteBotAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBotAliasRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
