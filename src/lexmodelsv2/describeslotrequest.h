// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESLOTREQUEST_H
#define QTAWS_DESCRIBESLOTREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeSlotRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DescribeSlotRequest : public LexModelsV2Request {

public:
    DescribeSlotRequest(const DescribeSlotRequest &other);
    DescribeSlotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSlotRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
