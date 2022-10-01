// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUTTERANCESREQUEST_H
#define QTAWS_DELETEUTTERANCESREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteUtterancesRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DeleteUtterancesRequest : public LexModelsV2Request {

public:
    DeleteUtterancesRequest(const DeleteUtterancesRequest &other);
    DeleteUtterancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUtterancesRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
