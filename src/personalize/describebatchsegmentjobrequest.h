// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBATCHSEGMENTJOBREQUEST_H
#define QTAWS_DESCRIBEBATCHSEGMENTJOBREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class DescribeBatchSegmentJobRequestPrivate;

class QTAWSPERSONALIZE_EXPORT DescribeBatchSegmentJobRequest : public PersonalizeRequest {

public:
    DescribeBatchSegmentJobRequest(const DescribeBatchSegmentJobRequest &other);
    DescribeBatchSegmentJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBatchSegmentJobRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
