// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILTINSLOTTYPESREQUEST_H
#define QTAWS_LISTBUILTINSLOTTYPESREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBuiltInSlotTypesRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT ListBuiltInSlotTypesRequest : public LexModelsV2Request {

public:
    ListBuiltInSlotTypesRequest(const ListBuiltInSlotTypesRequest &other);
    ListBuiltInSlotTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBuiltInSlotTypesRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
