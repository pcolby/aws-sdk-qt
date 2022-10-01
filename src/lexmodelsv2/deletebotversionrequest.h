// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTVERSIONREQUEST_H
#define QTAWS_DELETEBOTVERSIONREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteBotVersionRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DeleteBotVersionRequest : public LexModelsV2Request {

public:
    DeleteBotVersionRequest(const DeleteBotVersionRequest &other);
    DeleteBotVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBotVersionRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
