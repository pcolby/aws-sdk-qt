// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILTININTENTSREQUEST_H
#define QTAWS_LISTBUILTININTENTSREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBuiltInIntentsRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT ListBuiltInIntentsRequest : public LexModelsV2Request {

public:
    ListBuiltInIntentsRequest(const ListBuiltInIntentsRequest &other);
    ListBuiltInIntentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBuiltInIntentsRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
