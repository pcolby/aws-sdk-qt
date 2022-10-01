// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTENTREQUEST_H
#define QTAWS_DELETEINTENTREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteIntentRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DeleteIntentRequest : public LexModelsV2Request {

public:
    DeleteIntentRequest(const DeleteIntentRequest &other);
    DeleteIntentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIntentRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
