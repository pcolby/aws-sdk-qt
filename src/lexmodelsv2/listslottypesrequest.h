// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSLOTTYPESREQUEST_H
#define QTAWS_LISTSLOTTYPESREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class ListSlotTypesRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT ListSlotTypesRequest : public LexModelsV2Request {

public:
    ListSlotTypesRequest(const ListSlotTypesRequest &other);
    ListSlotTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSlotTypesRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
