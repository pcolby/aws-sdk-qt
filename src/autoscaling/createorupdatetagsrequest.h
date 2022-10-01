// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORUPDATETAGSREQUEST_H
#define QTAWS_CREATEORUPDATETAGSREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class CreateOrUpdateTagsRequestPrivate;

class QTAWSAUTOSCALING_EXPORT CreateOrUpdateTagsRequest : public AutoScalingRequest {

public:
    CreateOrUpdateTagsRequest(const CreateOrUpdateTagsRequest &other);
    CreateOrUpdateTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOrUpdateTagsRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
