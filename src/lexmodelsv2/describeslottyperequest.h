// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESLOTTYPEREQUEST_H
#define QTAWS_DESCRIBESLOTTYPEREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeSlotTypeRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DescribeSlotTypeRequest : public LexModelsV2Request {

public:
    DescribeSlotTypeRequest(const DescribeSlotTypeRequest &other);
    DescribeSlotTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSlotTypeRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
