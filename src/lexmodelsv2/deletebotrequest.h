// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTREQUEST_H
#define QTAWS_DELETEBOTREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteBotRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DeleteBotRequest : public LexModelsV2Request {

public:
    DeleteBotRequest(const DeleteBotRequest &other);
    DeleteBotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBotRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
