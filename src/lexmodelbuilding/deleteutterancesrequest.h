// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUTTERANCESREQUEST_H
#define QTAWS_DELETEUTTERANCESREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteUtterancesRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT DeleteUtterancesRequest : public LexModelBuildingRequest {

public:
    DeleteUtterancesRequest(const DeleteUtterancesRequest &other);
    DeleteUtterancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUtterancesRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
