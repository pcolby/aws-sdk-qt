// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTENTVERSIONREQUEST_H
#define QTAWS_DELETEINTENTVERSIONREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteIntentVersionRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT DeleteIntentVersionRequest : public LexModelBuildingRequest {

public:
    DeleteIntentVersionRequest(const DeleteIntentVersionRequest &other);
    DeleteIntentVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIntentVersionRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
