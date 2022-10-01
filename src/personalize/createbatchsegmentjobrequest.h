// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBATCHSEGMENTJOBREQUEST_H
#define QTAWS_CREATEBATCHSEGMENTJOBREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class CreateBatchSegmentJobRequestPrivate;

class QTAWSPERSONALIZE_EXPORT CreateBatchSegmentJobRequest : public PersonalizeRequest {

public:
    CreateBatchSegmentJobRequest(const CreateBatchSegmentJobRequest &other);
    CreateBatchSegmentJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBatchSegmentJobRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
