// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSLOTSREQUEST_H
#define QTAWS_LISTSLOTSREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class ListSlotsRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT ListSlotsRequest : public LexModelsV2Request {

public:
    ListSlotsRequest(const ListSlotsRequest &other);
    ListSlotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSlotsRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
